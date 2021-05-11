#pragma once
#include "LokalUzytkowy.h"
#include <iostream>
#include <string>
using namespace std;

///Klasa Sklep, pochodna klasy LokalUzytkowy
class Sklep : public LokalUzytkowy
{
protected:
	int liczba_kas=0;				///<pole zawiera informacje o liczbie kas w sklepie
	int liczba_regalow=0;			///<pole zawiera informacje o liczbie regalow w sklepie
	bool bramki_antykradziezowe=0;///<pole zawiera informacje o istnieniu bramek antykradziezowych przy wejsciu do sklepu

public:
	Sklep();	///<konstruktor
	~Sklep();	///<destruktor
	void zmiana_liczby_kas(int nowa_liczba);	///<pozwala zmienic wartosc pola liczba_kas
	void zmiana_liczby_regalow(int nowa_liczba);///<pozwala zmienic wartosc pola liczba_regalow
	int getLKas();
	int getLReg();
	bool getBramki();
	void zmianaBramek(bool x);

	virtual void zapis(ostream& zapis);		///<zapisuje pola obiektu do strumienia
	virtual void odczyt(istream& odczyt);	///<odczytuje pola obiektu z strumienia
	virtual void wypisz();	///<metoda wirtualna wypisujaca na ekran pola tej klasy
	void wypisz2();	///<metoda wypisujaca na ekran pola tej klasy
	virtual void edytuj();	///<metoda wirtualna wczytujaca pola tej klasy z standardowego wejscia

	friend ostream& operator<< (ostream& s, Sklep& m);	///<operator strumieniowy
	friend istream& operator>> (istream& s, Sklep& m);	///<operator strumieniowy
};

