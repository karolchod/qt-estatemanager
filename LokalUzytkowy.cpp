#include "LokalUzytkowy.h"
#include <iostream>
#include <string>
#include <fstream>


LokalUzytkowy::LokalUzytkowy()
{
	system_monitoringu = true;
	klasa = 1;
}


LokalUzytkowy::~LokalUzytkowy()
{
}

void LokalUzytkowy::zmiana_monitoring()
{
	cout << "Lokal uzytkowy musi miec system monitoringu!" << endl;
}

void LokalUzytkowy::zmiana_nazwy(string nowa_nazwa)
{
	nazwa_firmy = nowa_nazwa;
}

void LokalUzytkowy::zmiana_rodzaju(string nowy_rodzaj)
{
	rodzaj_dzialalnosci = nowy_rodzaj;
}


void LokalUzytkowy::zmiana_parkingu(int nowa_liczba)
{
	miejsca_parkingowe = nowa_liczba;
}

void LokalUzytkowy::zmiana_liczby_pracownikow(int nowa_liczba)
{
	liczba_pracownikow = nowa_liczba;
}

string LokalUzytkowy::getNazwa()
{
	return nazwa_firmy;
}

string LokalUzytkowy::getRodzaj()
{
	return rodzaj_dzialalnosci;
}

int LokalUzytkowy::getParking()
{
	return miejsca_parkingowe;
}

int LokalUzytkowy::getPrac()
{
	return liczba_pracownikow;
}

void LokalUzytkowy::zapis(ostream& zapis)
{

	zapis << *this;
}

void LokalUzytkowy::odczyt(istream& odczyt)
{
	odczyt>>*this;
}

void LokalUzytkowy::wypisz()
{
	cout << "\tLokalUzytkowy" << endl;
	cout << "Nazwa: " << nazwa_firmy << endl << "Rodzaj dzialalnosci: " << rodzaj_dzialalnosci << endl << "Miejsc parkingowych: " << miejsca_parkingowe << endl;
	cout << "Liczba pracownikow: " << liczba_pracownikow << endl;
	Lokal::wypisz();
}

void LokalUzytkowy::wypisz2()
{
	cout << "\tLokalUzytkowy" << endl;
	cout << "Nazwa: " << nazwa_firmy << endl << "Rodzaj dzialalnosci: " << rodzaj_dzialalnosci << endl << "Miejsc parkingowych: " << miejsca_parkingowe << endl;
	cout << "Liczba pracownikow: " << liczba_pracownikow << endl;
	Lokal::wypisz();
}

void LokalUzytkowy::edytuj()
{
	cout << "\tLokalUzytkowy" << endl;
	cout << "Nazwa (bez spacji): ";
	cin >> nazwa_firmy;
	cout << "Rodzaj dzialalnosci(bez spacji): ";
	cin >> rodzaj_dzialalnosci;
	cout << "Miejsc parkingowych: ";
	cin >> miejsca_parkingowe;
	cout << "Liczba pracownikow: ";
	cin >> liczba_pracownikow;
	Lokal::edytuj();
}

ostream & operator<<(ostream & s, LokalUzytkowy & m)
{
	s << m.nazwa_firmy << endl << m.rodzaj_dzialalnosci << endl << m.miejsca_parkingowe << endl << m.liczba_pracownikow << endl;
	s << (Lokal&)m;
	return s;
}

istream & operator>>(istream & s, LokalUzytkowy & m)
{
	s >> m.nazwa_firmy >> m.rodzaj_dzialalnosci;
	s >> m.miejsca_parkingowe >> m.liczba_pracownikow;
	s >> (Lokal&)m;
	return s;
}
