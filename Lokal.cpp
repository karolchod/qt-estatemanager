#include "Lokal.h"
#include <iostream>
#include <string>
#include <fstream>


Lokal::Lokal()
{
}


Lokal::~Lokal()
{
}

int Lokal::getKlasa()
{
	return klasa;
}

string Lokal::getAdres()
{
	return adres;
}

bool Lokal::getTel()
{
	return gniazdo_telefoniczne;
}

bool Lokal::getTv()
{
	return gniazdo_tv;
}

bool Lokal::getMonit()
{
	return system_monitoringu;
}

int Lokal::getLPom()
{
	return liczba_pomieszczen;
}

string Lokal::getObraz()
{
	return obraz;
}

void Lokal::zmienObraz(string x)
{
	obraz = x;
}

void Lokal::zmiana_adresu(string nowy_adres)
{
	adres = nowy_adres;
}

void Lokal::zmiana_telefon(bool i)
{
	gniazdo_telefoniczne = i;
}

void Lokal::zmiana_tv(bool i)
{
	gniazdo_tv = i;
}

void Lokal::zmiana_liczby_pomieszczen(int x)
{
	liczba_pomieszczen = x;
}

void Lokal::wypisz()
{
	cout << "\tLokal" << endl;
	cout << "Adres: "<<adres << endl << "Gniazdo telefoniczne:" << gniazdo_telefoniczne << endl << "Gniazdo tv: " << gniazdo_tv << endl;
	cout << "Liczba pomieszczen: " << liczba_pomieszczen << endl << "System monitoringu: " << system_monitoringu << endl<<endl;
}

void Lokal::wypisz2()
{
	cout << "\tLokal" << endl;
	cout << "Adres: " << adres << endl << "Gniazdo telefoniczne:" << gniazdo_telefoniczne << endl << "Gniazdo tv: " << gniazdo_tv << endl;
	cout << "Liczba pomieszczen: " << liczba_pomieszczen << endl << "System monitoringu: " << system_monitoringu << endl << endl;
}

void Lokal::edytuj()
{
	cout << "\tLokal" << endl;
	cout << "Adres: "; 
	string x;
	getline(cin, x);//wczytuje znak '/n' z poprzedniej linijki
	getline(cin, adres);
	cout << "Gniazdo telefoniczne (1-jest, 0-nie ma):"; 
	cin >> gniazdo_telefoniczne;
	cout << "Gniazdo tv (1-jest, 0-nie ma): "; 
	cin >> gniazdo_tv;
	cout << "Liczba pomieszczen: "; 
	cin >> liczba_pomieszczen;
	cout << "System monitoringu (1-jest, 0-nie ma): "; 
	cin >> system_monitoringu;
}



void Lokal::zmiana_monitoring(bool i)
{
	system_monitoringu = i;
}

ostream & operator<<(ostream & s, Lokal & m)
{
	s << m.adres << endl << m.gniazdo_telefoniczne << endl << m.gniazdo_tv << endl;
	s << m.liczba_pomieszczen << endl << m.system_monitoringu << endl<<m.obraz<<endl;
	return s;
}

istream & operator>>(istream & s, Lokal & m)
{
	string x;
	getline(s, x);	//najpierw wczytuje znak '\n' z poprzedniej linijki
	getline(s,m.adres);
	s >> m.gniazdo_telefoniczne >> m.gniazdo_tv;
	s >> m.liczba_pomieszczen >> m.system_monitoringu >> m.obraz;
	return s;
}
