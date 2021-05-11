#include "Mieszkaniec.h"
#include <iostream>
#include <string>
using namespace std;


void Mieszkaniec::ustaw_imie_i_nazwisko(const string& x,const string& z)
{
	imie = x;
	nazwisko = z;
}


void Mieszkaniec::ustaw_wiek(int x)
{
	wiek = x;
}

string Mieszkaniec::getImie()
{
	return imie;
}

string Mieszkaniec::getNazw()
{
	return nazwisko;
}

int Mieszkaniec::getWiek()
{
	return wiek;
}

void Mieszkaniec::wypisz()
{
	cout << "\t"<<imie << " " << nazwisko << ", lat " << wiek << "." << endl;
}

void Mieszkaniec::edytuj()
{
	cout << "Imie: ";
	cin >> imie;
	cout << "Nazwisko: ";
	cin >> nazwisko;
	cout << "Wiek: ";
	cin >> wiek;
}

Mieszkaniec::Mieszkaniec()
{
	DBG("wywolano konstruktor mieszkaniec")

}

Mieszkaniec::~Mieszkaniec()
{
	DBG("wywolano destruktor mieszkaniec")
}

ostream & operator<<(ostream & s, Mieszkaniec & m)
{
	s << m.imie  <<endl<< m.nazwisko <<endl<< m.wiek << endl;
	return s;
}

istream & operator>>(istream & s, Mieszkaniec & m)
{
	s >> m.imie >> m.nazwisko >> m.wiek;
	return s;
}
