#include "Oplata.h"
#include <iostream>
#include <string>
using namespace std;


void Oplata::dodaj_oplate(int nowa)
{
	kwota += nowa;
	ilosc_zaleglych++;
}

void Oplata::usun_oplate(int zaplata)
{
	if (kwota - zaplata >= 0)
		kwota -= zaplata;
	else
		cout << "Nadplata!" << endl;
	if (ilosc_zaleglych - 1 >= 0)
		ilosc_zaleglych--;
	else
		cout << "Nie ma nic do zaplaty!" << endl;
}

void Oplata::zmienKwote(int x)
{
	kwota = x;
}

void Oplata::zmienIlosc(int x)
{
	ilosc_zaleglych = x;
}

int Oplata::getKwota()
{
	return kwota;
}

int Oplata::getIlosc()
{
	return ilosc_zaleglych;
}

void Oplata::wypisz()
{
	cout << "\tKwota: " << kwota << endl << "\tIlosc zaleglych: " << ilosc_zaleglych << endl;
}

void Oplata::edytuj()
{
	cout << "Kwota: ";
	cin >> kwota;
	cout << "Ilosc zaleglych: ";
	cin >> ilosc_zaleglych;
}

Oplata::Oplata()
{
	DBG("wywolano konstruktor oplata")
	
}



Oplata::~Oplata()
{
	DBG("wywolano destruktor oplata")
}

ostream & operator<<(ostream & s, Oplata & o)
{
	s << o.kwota << endl << o.ilosc_zaleglych << endl;
	return s;
}

istream & operator>>(istream & s, Oplata & o)
{
	s >> o.kwota  >> o.ilosc_zaleglych;
	return s;
}
