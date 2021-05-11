#pragma once
#include "Lokal.h"
#include <iostream>
#include <string>
using namespace std;

///Klasa LokalUzytkowy, pochodna klasy Lokal
class LokalUzytkowy : public Lokal
{
protected:
	string nazwa_firmy="bez_nazwy";			///<pole zawiera nazwe firmy zlokalizowanej w lokalu uzytkowym
	string rodzaj_dzialalnosci="bez_rodzaju";	///<pole zawiera typ dzialalnosci w lokalu np. biuro lub magazyn
	int miejsca_parkingowe=0;		///<pole zawiera liczbe miejsc parkingowych przypisanych lokalowi np. parking dla klientow
	int liczba_pracownikow=0;		///<pole zawiera liczbe osob pracujacych w lokalu

public:
	LokalUzytkowy();	///<konstruktor domyslny
	~LokalUzytkowy();	///<destruktor
	void zmiana_monitoring();	///<sluzy do zmiany wartosci pola system_monitoringu
	void zmiana_nazwy(string nowa_nazwa);			///<sluzy do zmiany nazwy firmy, bez spacji
	void zmiana_rodzaju(string nowy_rodzaj);		///<sluzy do zmiany rodzaju dzialalnosci, bez spacji
	void zmiana_parkingu(int nowa_liczba);			///<sluzy do zmiany liczby miejsc parkingowych
	void zmiana_liczby_pracownikow(int nowa_liczba);///<sluzy do zmiany liczby pracownikow

	string getNazwa();
	string getRodzaj();
	int getParking();
	int getPrac();

	virtual void zapis(ostream& zapis);		///<zapisuje pola obiektu do pliku strumienia
	virtual void odczyt(istream& odczyt);	///<odczytuje pola obiektu z pliku strumienia
	virtual void wypisz();		///<metoda wirtualna wypisujaca na ekran pola tej klasy
	void wypisz2();	///<metoda wypisujaca na ekran pola tej klasy
	virtual void edytuj();	///<metoda wirtualna wczytujaca pola tej klasy z standardowego wejscia

	friend ostream& operator<< (ostream& s, LokalUzytkowy& m);	///<operator strumieniowy
	friend istream& operator>> (istream& s, LokalUzytkowy& m);	///<operator strumieniowy
};

