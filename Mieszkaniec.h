#pragma once

#ifdef _DEBUG
#define DBG(x) //std::cout << "DBG: " << x << std::endl;
#else
#define DBG(x)
#endif
#include <iostream>
#include <string>
using namespace std;
///Podklasa Mieszkaniec uzywana w klasie Mieszkanie
class Mieszkaniec
{
private:
	string imie= "Brak_imienia";		///<pole zawiera imie mieszkanca
	string nazwisko= "Brak_nazwiska";	///<pole zawiera nazwisko mieszkanca
	int wiek=0;							///<pole zawiera wiek mieszkanca
public:
	void ustaw_imie_i_nazwisko(const string& x, const string &z);	///<metoda umozliwia 
	void ustaw_wiek(int x);///<metoda umozliwia zmiane wartosci pola wiek

	string getImie();
	string getNazw();
	int getWiek();

	void wypisz();	///<metoda wypisujaca na ekran pola tej klasy
	void edytuj();	///<metoda wczytujaca pola tej klasy z standardowego wejscia

	friend ostream& operator<< (ostream& s, Mieszkaniec& m);	///<operator strumieniowy
	friend istream& operator>> (istream& s, Mieszkaniec& m);	///<operator strumieniowy

	Mieszkaniec();///<konstruktor domyslny
	~Mieszkaniec();///<destruktor
};

