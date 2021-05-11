#include "Sklep.h"
#include <iostream>
#include <string>
#include <fstream>


Sklep::Sklep()
{
	rodzaj_dzialalnosci = "Sklep";
	klasa = 2;
}


Sklep::~Sklep()
{
}

void Sklep::zmiana_liczby_kas(int nowa_liczba)
{
	liczba_kas = nowa_liczba;
}

void Sklep::zmiana_liczby_regalow(int nowa_liczba)
{
	liczba_regalow = nowa_liczba;
}

int Sklep::getLKas()
{
	return liczba_kas;
}

int Sklep::getLReg()
{
	return liczba_regalow;
}

bool Sklep::getBramki()
{
	return bramki_antykradziezowe;
}

void Sklep::zmianaBramek(bool x)
{
	bramki_antykradziezowe = x;
}



void Sklep::zapis(ostream& zapis)
{

	zapis << *this;
}

void Sklep::odczyt(istream& odczyt)
{
	odczyt >> *this;
}

void Sklep::wypisz()
{
	cout << "\tSklep"<<endl;
	cout << "Liczba kas: "<<liczba_kas << endl <<"Liczba regalow: "<< liczba_regalow << endl <<"Bramki antykradziezowe: "<< bramki_antykradziezowe << endl;
	LokalUzytkowy::wypisz();
}

void Sklep::wypisz2()
{
	cout << "\tSklep" << endl;
	cout << "Liczba kas: " << liczba_kas << endl << "Liczba regalow: " << liczba_regalow << endl << "Bramki antykradziezowe: " << bramki_antykradziezowe << endl;
	LokalUzytkowy::wypisz();
}

void Sklep::edytuj()
{
	cout << "\tSklep" << endl;
	cout << "Liczba kas: " << endl;
	cin >> liczba_kas;
	cout << "Liczba regalow: " << endl;
	cin >> liczba_regalow;
	cout << "Bramki antykradziezowe(1-sa, 0-nie ma): " << endl;
	cin >> bramki_antykradziezowe;
	LokalUzytkowy::edytuj();
}

ostream & operator<<(ostream & s, Sklep & m)
{
	s << m.liczba_kas << endl << m.liczba_kas << endl << m.bramki_antykradziezowe << endl;
	s << (LokalUzytkowy&)m;
	return s;
}

istream & operator>>(istream & s, Sklep & m)
{
	s >> m.liczba_kas >> m.liczba_kas >> m.bramki_antykradziezowe;
	s >> (LokalUzytkowy&)m;
	return s;
}
