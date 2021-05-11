#pragma once
#include "Lokal.h"

#ifdef _DEBUG
#define DBG(x) //std::cout << "DBG: " << x << std::endl;
#else
#define DBG(x)
#endif

#include "Mieszkaniec.h"
#include "Pomieszczenia.h"
#include "Oplata.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

///Klasa Mieszkanie, pochodna klasy Lokal
class Mieszkanie : public Lokal
{
private:
	int numer = 0;					///<pole zawiera numer mieszkania
	int liczba_mieszkancow = 0;		///<pole zawiera liczbe mieszkancow
	int powierzchnia=50;			///<pole zawiera powierzchnie mieszkania
	static int liczba_stworzonych;	///<pole zawiera liczbe stworzonych obiektow klasy Mieszkanie
	static int liczba_istnejacych;	///<pole zawiera liczbe istniejacych obiektow klasy Mieszkanie
	
public:
	vector <Mieszkaniec> mieszkancy;///<wektor obiektow zawierajacych informacje o mieszkancach
	Oplata oplaty;					///<pole zawiera informacje o oplatach
	Pomieszczenia pomieszczenia;	///<pole zawiera informacje o pomieszczeniach

	Mieszkanie();							///<konstruktor
	Mieszkanie(int ilosc_mieszkancow);		///<konstruktor z parametrem
	Mieszkanie(const Mieszkanie &m);		///<konstruktor kopiujacy
	~Mieszkanie();							///<destruktor

	Mieszkanie& operator=(const Mieszkanie &m);				///<operator przypisania
	friend ostream& operator<< (ostream& s, Mieszkanie& m);	///<operator strumieniowy
	friend istream& operator>> (istream& s, Mieszkanie& m);	///<operator strumieniowy
	Mieszkanie& operator++(int);							///<dodaje puste pole mieszkanca
	Mieszkanie& operator--(int);							///<usuwa ostatniego na liscie mieszkanca
	void operator[](int k);							///<wypisuje mieszkanca z pozycji k w tablicy mieszkancow obiektu

	bool operator == (const Mieszkanie &m);		///<Operator porownania
	bool operator < (const Mieszkanie &m);		///<Operator porownania
	bool operator > (const Mieszkanie &m);		///<Operator porownania
	bool operator <= (const Mieszkanie &m);		///<Operator porownania
	bool operator >= (const Mieszkanie &m);		///<Operator porownania
	operator string();							///<operator konwersji, zwraca numer mieszkania i liczbe mieszkancow

	virtual void wypisz();///<metoda sluzaca do wypisania obiektu na ekran, dawniej operator strumieniowy ale dobrze wyglada w konsoli a nie w pliku
	void wypisz2();	///<metoda wypisujaca na ekran pola tej klasy
	virtual void edytuj();	///<metoda wirtualna wczytujaca pola tej klasy z standardowego wejscia

	virtual void zapis(ostream& zapis);		///<zapisuje pola obiektu do strumienia
	virtual void odczyt(istream& odczyt);	///<odczytuje pola obiektu z strumienia

	void zmien_numer(int x);			///<zmiana nr mieszkania	
	void zmien_powierzchnie(int x);		///<zmiana powierzchni	
	int zwroc_liczbe_mieszkancow();		///<zwraca liczbe mieszkancow, przydatne przy uzyciu operatora []
	static int stworzone_obiekty();		///<zwraca liczbe dotychczas stworzonych obiektow	
	static int istniejace_obiekty();	///<zwraca liczbe aktalnie istniejacych obiektow

	void zmiana_monitoring(bool x);	///<sluzy do zmiany wartosci pola system_monitoringu

	int getNumer();
	int getPow();

};