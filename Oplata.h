#pragma once

#ifdef _DEBUG
#define DBG(x) //std::cout << "DBG: " << x << std::endl;
#else
#define DBG(x)
#endif
#include <iostream>
#include <string>
using namespace std;
///Podklasa Oplata uzywana w klasie Mieszkanie
class Oplata
{
private:
	int kwota=0;	///<pole zawiera kwote do zaplaty
	int ilosc_zaleglych=0;///<pole zawiera ilosc zaleglych oplat
	
public:
	void dodaj_oplate(int nowa);	///<dodaje oplate do kwoty 
	void usun_oplate(int zaplata);	///<usuwa zaplate z kwoty
	void zmienKwote(int x);
	void zmienIlosc(int x);
	int getKwota();
	int getIlosc();

	void wypisz();	///<metoda wczytujaca pola tej klasy z standardowego wejscia
	void edytuj();	///<metoda wypisujaca na ekran pola tej klasy

	friend ostream& operator<< (ostream& s, Oplata& o);///<operator strumienowy
	friend istream& operator>> (istream& s, Oplata& o);///<operator strumienowy

	Oplata();	///<konstruktor
	~Oplata();	///<destruktor
};

