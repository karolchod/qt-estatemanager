#include "Mieszkanie.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int Mieszkanie::liczba_istnejacych = 0;
int Mieszkanie::liczba_stworzonych = 0;

//KONSTRUKTORY I DESTRUKTOR

Mieszkanie::Mieszkanie()
{
	DBG("wywolano konstruktor mieszkanie bez parametru")

	liczba_istnejacych++;
	liczba_stworzonych++;
	numer = liczba_stworzonych;
	klasa = 3;
}

Mieszkanie::Mieszkanie(int liczba_mieszkancow)
{
	Mieszkaniec m;
	DBG("wywolano konstruktor mieszkanie z parametrem")
	for (int i = 0; i < liczba_mieszkancow; i++)
		mieszkancy.push_back(m);
	liczba_istnejacych++;
	liczba_stworzonych++;
	numer = liczba_stworzonych;
	klasa = 3;
}

Mieszkanie::Mieszkanie(const Mieszkanie &m)
{
	DBG("wywolano konstruktor mieszkanie kopiujacy")
		liczba_mieszkancow = m.liczba_mieszkancow;
	oplaty = m.oplaty;
	pomieszczenia = m.pomieszczenia;
	mieszkancy = m.mieszkancy;
	liczba_istnejacych++;
	liczba_stworzonych++;
	numer = liczba_stworzonych;
	klasa = 3;
}

Mieszkanie::~Mieszkanie()
{
	DBG("wywolano destruktor")

	liczba_istnejacych--;
}

//OPERATORY

ostream & operator<<(ostream & s, Mieszkanie & m)
{
	s << m.numer << endl;
	s << m.liczba_mieszkancow << endl;
	for (int i = 0; i < m.liczba_mieszkancow; i++)
		s <<m.mieszkancy[i];
	s << m.oplaty;
	s << m.pomieszczenia;
	s << (Lokal&)m;
	return s;
}

istream & operator>>(istream & s, Mieszkanie & m)
{
	s >> m.numer;
	s >> m.liczba_mieszkancow;
	for (int i = 0; i < m.liczba_mieszkancow; i++)
		s >> m.mieszkancy[i];
	s >> m.oplaty;
	s >> m.pomieszczenia;
	s >> (Lokal&)m;
	return s;
}


Mieszkanie& Mieszkanie::operator=(const Mieszkanie & m)
{
	liczba_mieszkancow = m.liczba_mieszkancow;
	oplaty = m.oplaty;
	pomieszczenia = m.pomieszczenia;
	mieszkancy = m.mieszkancy;
	return *this;
}

Mieszkanie& Mieszkanie::operator++(int)
{
	Mieszkaniec m;
	liczba_mieszkancow++;
	mieszkancy.push_back(m);
	return *this;
}

Mieszkanie& Mieszkanie::operator--(int)
{
	if (liczba_mieszkancow>0)
	{
		liczba_mieszkancow--;
		mieszkancy.pop_back();
	}
	return *this;
}

void Mieszkanie::operator[](int k)
{
	cout << mieszkancy[k];
}

bool Mieszkanie::operator==(const Mieszkanie & m)
{
	if (m.powierzchnia == powierzchnia)
		return true;
	else
		return false;
}

bool Mieszkanie::operator<(const Mieszkanie & m)
{
	if (m.powierzchnia <= powierzchnia)
		return false;
	else
		return true;
}

bool Mieszkanie::operator>(const Mieszkanie & m)
{
	if (m.powierzchnia >= powierzchnia)
		return false;
	else
		return true;
}

bool Mieszkanie::operator<=(const Mieszkanie & m)
{
	if (m.powierzchnia < powierzchnia)
		return false;
	else
		return true;
}

bool Mieszkanie::operator>=(const Mieszkanie & m)
{
	if (m.powierzchnia > powierzchnia)
		return false;
	else
		return true;
}

Mieszkanie::operator string()
{
	string x;
	x = "Mieszkanie nr " + to_string(numer) + " ma " + to_string(liczba_mieszkancow) + " mieszkancow";
	return x;
}

//METODY

void Mieszkanie::wypisz()
{
	cout << "\tMieszkanie " << endl;
	cout<< "Numer " << numer << endl;
	cout << "Liczba mieszkancow: " << liczba_mieszkancow << endl;
	if (liczba_mieszkancow != 0)
		cout << "Mieszkancy:" << endl;
	for (int i = 0; i < liczba_mieszkancow; i++)
		mieszkancy[i].wypisz();
	cout << "Oplaty:" << endl;
	oplaty.wypisz();
	cout << "Pomieszczenia" << endl;
	pomieszczenia.wypisz();
	Lokal::wypisz();
}

void Mieszkanie::wypisz2()
{
	cout << "\tMieszkanie " << endl;
	cout << "Numer " << numer << endl;
	cout << "Liczba mieszkancow: " << liczba_mieszkancow << endl;
	if (liczba_mieszkancow != 0)
		cout << "Mieszkancy:" << endl;
	for (int i = 0; i < liczba_mieszkancow; i++)
		mieszkancy[i].wypisz();
	cout << "Oplaty:" << endl;
	oplaty.wypisz();
	cout << "Pomieszczenia" << endl;
	pomieszczenia.wypisz();
	Lokal::wypisz();
}

void Mieszkanie::edytuj()
{
	mieszkancy.clear();
	cout << "\tMieszkanie " << endl;
	cout << "Numer mieszkania:";
	cin >> numer;
	cout << "Liczba mieszkancow: ";
	cin >> liczba_mieszkancow;
	if (liczba_mieszkancow != 0)
		cout << "Mieszkancy:" << endl;
	for (int i = 0; i < liczba_mieszkancow; i++) {
		Mieszkaniec temp;
		temp.edytuj();
		mieszkancy.push_back(temp);
	}
	cout << "Oplaty:" << endl;
	oplaty.edytuj();
	cout << "Pomieszczenia:" << endl;
	pomieszczenia.edytuj();
	Lokal::edytuj();
}

void Mieszkanie::zapis(ostream& zapis)
{
	zapis << *this;
}

void Mieszkanie::odczyt(istream& odczyt)
{
	Mieszkaniec temp;
	odczyt >> numer;
	odczyt >> liczba_mieszkancow;
	for (int i = 0; i < liczba_mieszkancow; i++)
	{
		odczyt >> temp;
		mieszkancy.push_back(temp);
	}
	odczyt >> oplaty;
	odczyt >> pomieszczenia;
	odczyt >> (Lokal&)*this;
}

void Mieszkanie::zmien_numer(int x)
{
	numer = x;
}

void Mieszkanie::zmien_powierzchnie(int x)
{
	powierzchnia = x;
}

int Mieszkanie::zwroc_liczbe_mieszkancow()
{
	return liczba_mieszkancow;

}

int Mieszkanie::istniejace_obiekty()
{
	return liczba_istnejacych;
}

void Mieszkanie::zmiana_monitoring(bool x)
{
	system_monitoringu = x;
}

int Mieszkanie::getNumer()
{
	return numer;
}

int Mieszkanie::getPow()
{
	return powierzchnia;
}


int Mieszkanie::stworzone_obiekty()
{
	return liczba_stworzonych;
}
