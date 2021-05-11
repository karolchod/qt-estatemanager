#pragma once
#include <QGraphicsScene>
#include <QMainWindow>
#include "ui_Projekt3.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Lokal.h"
#include "LokalUzytkowy.h"
#include "Sklep.h"
#include "Mieszkanie.h"

class Projekt3 : public QMainWindow
{
	Q_OBJECT

public:
	Projekt3(QWidget *parent = Q_NULLPTR);
	~Projekt3();

public slots:
	void wyswietl(int x);
	void dodLokUz();
	void dodSklep();
	void dodMiesz();
	void usunMieszkanca();
	void dodajMieszkanca();
	void zapiszMieszkanca();
	void usun();
	void poprzedni();
	void nastepny();
	void zmianaObrazu();
	void zapiszZmiany();
	void prevMieszkaniec();
	void nextMieszkaniec();
	void wyswietlMieszkanca(int x);
	void cofnij();
	/*
	void zapiszDoPliku();
	void odczytZPliku();
	*/
private:
	Ui::Projekt3 ui;
	Lokal* nowy=nullptr;
	vector <Lokal*>lokale;
	int aktualny = 0;
	int aktmieszk = 0;
	QGraphicsScene scene;
	QPixmap image;
	
};
