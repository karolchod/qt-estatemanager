#pragma once
#include <iostream>
#include <string>
using namespace std;

///Klasa abstrakcyjna 
class Lokal
{
protected:
	string adres="brak adresu";				///<pole zawiera adres lokalu
	bool gniazdo_telefoniczne=true;	///<pole zawiera informacje o gniezdzie telefonicznym w lokalu
	bool gniazdo_tv=true;			///<pole zawiera informacje o gniezdzie tv w lokalu
	int liczba_pomieszczen=5;		///<pole zawiera informacje o liczbie pomieszczen
	bool system_monitoringu=false;	///<pole zawiera informacje o istnieniu systemu monitoringu
	string obraz="C://Users/karol/Desktop/Projekt3/Projekt3/obrazy/null.png";
	int klasa = 0; //1-LokalUzytkowy, 2-Sklep, 3-Mieszkanie

public:
	Lokal();	///<konstruktor domyslny
	~Lokal();	///<destruktor
	int getKlasa();
	string getAdres();
	bool getTel();
	bool getTv();
	bool getMonit();
	int getLPom();
	string getObraz();
	void zmienObraz(string x);
	
	void zmiana_adresu(string nowy_adres);			///<sluzy do zmiany wartosci pola adres
	void zmiana_telefon(bool i);					///<sluzy do zmiany wartosci pola gniazdo_telefoniczne, metoda abstrakcyjna
	void zmiana_tv(bool i);						///<sluzy do zmiany wartosci pola gniazdo_tv, metoda abstrakcyjna
	virtual void zmiana_monitoring(bool i);	///<sluzy do zmiany wartosci pola system_monitoringu
	void zmiana_liczby_pomieszczen(int x);	///<sluzy do zmiany wartosci pola liczba_pomieszczen

	virtual void zapis(ostream& zapis)=0;	///<zapisuje pola obiektu do pliku strumienia, metoda abstrakcyjna
	virtual void odczyt(istream& odczyt)=0;	///<odczytuje pola obiektu z pliku strumienia, metoda abstrakcyjna

	virtual void wypisz();	///<metoda wirtualna wypisujaca na ekran pola tej klasy
	void wypisz2();	///<metoda wypisujaca na ekran pola tej klasy
	virtual void edytuj();	///<metoda wirtualna wczytujaca pola tej klasy z standardowego wejscia

	friend ostream& operator<< (ostream& s, Lokal& m);	///<operator strumieniowy
	friend istream& operator>> (istream& s, Lokal& m);	///<operator strumieniowy
};