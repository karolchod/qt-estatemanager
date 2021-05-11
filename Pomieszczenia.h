#pragma once

#ifdef _DEBUG
#define DBG(x)// std::cout << "DBG: " << x << std::endl;
#else
#define DBG(x)
#endif
#include <iostream>
#include <string>
using namespace std;


///Podklasa Pomieszczenia uzywana w klasie Mieszkanie
class Pomieszczenia
{
private:
	int stan_scian = 5;///<pole zawiera informacje o stanie scian w pomieszczeniach, w skali od 0 do 10
	int stan_rur = 5;///<pole zawiera informacje o stanie rur w pomieszczeniach, w skali od 0 do 10
	
public:
	int getSciany();
	int getRury();
	void zmienSciany(int nowe);
	void zmienRury(int nowe);

	void malarz();	///<zmienia stan_scian na 10
	void hydraulik();	///<zmienia stan_rur na 10

	void wypisz();	///<metoda wypisujaca na ekran pola tej klasy
	void edytuj();	///<metoda wczytujaca pola tej klasy z standardowego wejscia

	friend ostream& operator<< (ostream& s, Pomieszczenia& m);///<operator strumieniowy
	friend istream& operator>> (istream& s, Pomieszczenia& m);///<operator strumieniowy

	Pomieszczenia();///<konstruktor domyslny
	~Pomieszczenia();///<destruktor
};

