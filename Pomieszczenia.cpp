#include "Pomieszczenia.h"
#include <iostream>
#include <string>

using namespace std;
/*
//funkcja stan_string sluzy do wypisywania zmiennych typu "enum stan"
string stan_string(int e) {
	switch (e)
	{
	case 0:
		return "FATALNY";
		break;
	case 1:
		return "ZLY";
		break;
	case 2:
		return "SREDNI";
		break;
	case 3:
		return "DOBRY";
		break;
	case 4:
		return "DOSKONALY";
		break;
	default:
		return 0;
	}
}
*/
int Pomieszczenia::getSciany()
{
	return stan_scian;
}
int Pomieszczenia::getRury()
{
	return stan_rur;
}
void Pomieszczenia::zmienSciany(int nowe)
{
	stan_scian = nowe;
}
void Pomieszczenia::zmienRury(int nowe)
{
	stan_rur = nowe;
}
void Pomieszczenia::malarz()
{
	stan_scian = 10;
}

void Pomieszczenia::hydraulik()
{
	stan_rur = 10;
}

void Pomieszczenia::wypisz()
{
	cout <<"\tStan scian: "<< stan_scian << endl <<"\tStan rur: "<< stan_rur << endl;
}

void Pomieszczenia::edytuj()
{
	cout << "Stan scian (od 0 do 10): ";
	cin >> stan_scian;
	cout << "Stan rur (od 0 do 10): ";
	cin >> stan_rur;
}

Pomieszczenia::Pomieszczenia()
{
	DBG("wywolano konstruktor pomieszczenia")
}


Pomieszczenia::~Pomieszczenia()
{
	DBG("wywolano destruktor pomieszczenia")
}

ostream & operator<<(ostream & s, Pomieszczenia & m)
{
	s << m.stan_scian << endl << m.stan_rur << endl;
	return s;
}

istream & operator>>(istream & s, Pomieszczenia & m)
{
	s >> m.stan_scian >> m.stan_rur;
	return s;
}
