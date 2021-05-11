#include "Projekt3.h"
#include "Lokal.h"
#include "LokalUzytkowy.h"
#include "Sklep.h"
#include "Mieszkanie.h"
#include "Mieszkaniec.h"
#include <QMessageBox>
#include <QGraphicsScene>
#include <qfiledialog.h>

Projekt3::Projekt3(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);	
	ui.LICZBA->setText(QString::number(lokale.size()));
	ui.FileRead->setVisible(false);
	ui.FileSave->setVisible(false);
	wyswietl(0);
}

Projekt3::~Projekt3()
{
}


void Projekt3::dodLokUz()
{

	nowy = new LokalUzytkowy();
	lokale.push_back(nowy);
	ui.LICZBA->setText(QString::number(lokale.size()));
	zapiszZmiany();
	wyswietl(lokale.size()-1);
}

void Projekt3::dodSklep()
{
	nowy = new Sklep();
	lokale.push_back(nowy);
	ui.LICZBA->setText(QString::number(lokale.size()));
	zapiszZmiany();
	wyswietl(lokale.size()-1);
}

void Projekt3::dodMiesz()
{
	nowy = new Mieszkanie();
	lokale.push_back(nowy);
	ui.LICZBA->setText(QString::number(lokale.size()));
	zapiszZmiany();
	wyswietl(lokale.size()-1);
}

void Projekt3::usunMieszkanca()
{
	Mieszkanie *mieszkanie = (Mieszkanie*)lokale[aktualny];//RZUTOWANIE
	if (aktmieszk == mieszkanie->mieszkancy.size() - 1) {
		mieszkanie->mieszkancy.erase(mieszkanie->mieszkancy.begin() + aktmieszk);
		wyswietlMieszkanca(aktmieszk - 1);
	}
	else if (mieszkanie->mieszkancy.size() > 0) {
		mieszkanie->mieszkancy.erase(mieszkanie->mieszkancy.begin() + aktmieszk);
		wyswietlMieszkanca(aktmieszk);
	}
	else if (aktmieszk == 0) {
		mieszkanie->mieszkancy.erase(mieszkanie->mieszkancy.begin());
		wyswietlMieszkanca(0);
	}
	ui.LICZBA->setText(QString::number(mieszkanie->mieszkancy.size()));
	if (mieszkanie->mieszkancy.size() == 0)
	{
		ui.ImielineEdit->clear();
		ui.NazwiskolineEdit->clear();
		ui.WiekspinBox->clear();
	}
}

void Projekt3::dodajMieszkanca()
{
	Mieszkanie *mieszkanie = (Mieszkanie*)lokale[aktualny];//RZUTOWANIE
	Mieszkaniec* newm = new Mieszkaniec();
	mieszkanie->mieszkancy.push_back(*newm);
	ui.LiczbaMieszkancowLabel->setText(QString::number(mieszkanie->mieszkancy.size()));
	wyswietlMieszkanca(mieszkanie->mieszkancy.size()-1);
}

void Projekt3::zapiszMieszkanca()
{
	Mieszkanie *mieszkanie = (Mieszkanie*)lokale[aktualny];//RZUTOWANIE
	QString imie=ui.ImielineEdit->text(), nazwisko=ui.NazwiskolineEdit->text();
	mieszkanie->mieszkancy[aktmieszk].ustaw_imie_i_nazwisko(imie.toUtf8().constData(), nazwisko.toUtf8().constData());
	mieszkanie->mieszkancy[aktmieszk].ustaw_wiek(ui.WiekspinBox->value());
	
}

void Projekt3::usun()
{
	if (aktualny == lokale.size() - 1) {
		lokale.erase(lokale.begin() + aktualny);
		wyswietl(aktualny - 1);
	}
	else if (lokale.size() > 0) {
		lokale.erase(lokale.begin() + aktualny);
		wyswietl(aktualny);
	}
	else if (aktualny == 0) {
		lokale.erase(lokale.begin());
		wyswietl(0);
	}
	ui.LICZBA->setText(QString::number(lokale.size()));

}

void Projekt3::poprzedni()
{
	zapiszZmiany();
	wyswietl(aktualny - 1);
}

void Projekt3::nastepny()
{
	zapiszZmiany();
	wyswietl(aktualny + 1);
}

void Projekt3::zmianaObrazu()
{
	QString filename = QFileDialog::getOpenFileName(this,tr("Wybor obrazu"),"./obrazy/","Obrazy (*.png);;Wszystkie pliki (*.*)");
	//QMessageBox::information(this,tr("Nazwa pliku"),filename);
	if (lokale.size() != 0) {
		lokale[aktualny]->zmienObraz(filename.toUtf8().constData());
		if (image.load(QString::fromStdString(lokale[aktualny]->getObraz()))) {
			//if (image.load("C://Users/karol/Desktop/Projekt3/Projekt3/null.png")) {
			scene.setSceneRect(image.rect());
			scene.clear();
			scene.addPixmap(image);
			ui.graphicsView->fitInView(image.rect());
			ui.LoadImageLabel->setText("Obraz zaladowany pomyslnie.");
		}
		else {
			ui.LoadImageLabel->setText("Nie udalo sie zaladowac obrazu.");
		}
	}
}



void Projekt3::wyswietl(int x) {
	if (x == 0) {
		ui.PrevLok->setEnabled(false);
	}
	else {
		ui.PrevLok->setEnabled(true);
		ui.UsunButton->setEnabled(true);
	}
	if (x == lokale.size() - 1) {
		ui.NextLok->setEnabled(false);
	}
	else {
		ui.NextLok->setEnabled(true);
	}
	ui.LICZBA->setText(QString::number(lokale.size()));
	if (lokale.size() == 0) {	
		ui.LokalgroupBox->setVisible(false);
		ui.LokUzgroupBox->setVisible(false);
		ui.MieszkaniegroupBox->setVisible(false);
		ui.SklepgroupBox->setVisible(false);
		ui.SciezkagroupBox->setVisible(false);
		ui.NrObiektu->setText("brak obiektow");
		ui.UsunButton->setEnabled(false);
		ui.NextLok->setEnabled(false);
		ui.PrevLok->setEnabled(false);
		ui.KlasaLabel->setText("");
		ui.graphicsView->setVisible(false);
		ui.ZapiszAktualnybutton->setEnabled(false);
		ui.BackButton->setEnabled(false);
		return;
	}
	else {
		aktualny = x;
		ui.NrObiektu->setText(QString::number(x));
		ui.UsunButton->setEnabled(true);
		ui.BackButton->setEnabled(true);
		//AKTYWACJA ODPOWIEDNICH POL EDYCYJNYCH
		if (lokale[aktualny]->getKlasa() == 1) {	//1 - lokal uzytkowy
			ui.LokalgroupBox->setVisible(true);
			ui.LokUzgroupBox->setVisible(true);
			ui.MieszkaniegroupBox->setVisible(false);
			ui.SklepgroupBox->setVisible(false);
			ui.SciezkagroupBox->setVisible(true);
			ui.KlasaLabel->setText("Lokal uzytkowy");
			ui.graphicsView->setVisible(true);
			ui.ZapiszAktualnybutton->setEnabled(true);
		}
		else if (lokale[aktualny]->getKlasa() == 2) {	//2 - sklep
			ui.LokalgroupBox->setVisible(true);
			ui.LokUzgroupBox->setVisible(true);
			ui.MieszkaniegroupBox->setVisible(false);
			ui.SklepgroupBox->setVisible(true);
			ui.SciezkagroupBox->setVisible(true);
			ui.KlasaLabel->setText("Sklep");
			ui.graphicsView->setVisible(true);
			ui.ZapiszAktualnybutton->setEnabled(true);
		}
		else if (lokale[aktualny]->getKlasa() == 3) {	//3 - mieszkanie
			ui.LokalgroupBox->setVisible(true);
			ui.LokUzgroupBox->setVisible(false);
			ui.MieszkaniegroupBox->setVisible(true);
			ui.SklepgroupBox->setVisible(false);
			ui.SciezkagroupBox->setVisible(true);
			ui.KlasaLabel->setText("Mieszkanie");
			ui.graphicsView->setVisible(true);
			ui.ZapiszAktualnybutton->setEnabled(true);
		}

		ui.AdreslineEdit->setText(QString::fromStdString(lokale[aktualny]->getAdres()));
		ui.TelefoncheckBox->setChecked(lokale[aktualny]->getTel());
		ui.TvcheckBox->setChecked(lokale[aktualny]->getTv());
		ui.MonitoringcheckBox->setChecked(lokale[aktualny]->getMonit());
		ui.PomieszczeniaspinBox->setValue(lokale[aktualny]->getLPom());
		ui.sciezka->setText(QString::fromStdString(lokale[aktualny]->getObraz()));
		ui.LoadImageLabel->setText("");
		ui.graphicsView->setScene(&scene);
		//LADOWANIE OBRAZU
		if (image.load(QString::fromStdString(lokale[aktualny]->getObraz()))) {
		//if (image.load("C://Users/karol/Desktop/Projekt3/Projekt3/null.png")) {
			scene.setSceneRect(image.rect());
			scene.clear();
			scene.addPixmap(image);
			ui.graphicsView->fitInView(image.rect());
			ui.LoadImageLabel->setText("Obraz zaladowany pomyslnie.");
		}
		else {
			ui.LoadImageLabel->setText("Nie udalo sie zaladowac obrazu.");
		}

		if (lokale[aktualny]->getKlasa() == 1 || lokale[aktualny]->getKlasa() == 2) {
			LokalUzytkowy *lokal = (LokalUzytkowy*)lokale[aktualny];//RZUTOWANIE
			ui.RodzajlineEdit->setText(QString::fromStdString(lokal->getRodzaj()));
			ui.NazwalineEdit->setText(QString::fromStdString(lokal->getNazwa()));
			ui.ParkingspinBox->setValue(lokal->getParking());
			ui.PracownicyspinBox->setValue(lokal->getPrac());
			if (lokale[aktualny]->getKlasa() == 2) {
				Sklep *sklep = (Sklep*)lokale[aktualny];//RZUTOWANIE
				ui.KasyspinBox->setValue(sklep->getLKas());
				ui.RegalyspinBox->setValue(sklep->getLReg());
				ui.BramkicheckBox->setChecked(sklep->getBramki());
			}
		}
		else if (lokale[aktualny]->getKlasa() == 3) {
			Mieszkanie *mieszkanie = (Mieszkanie*)lokale[aktualny];//RZUTOWANIE
			ui.NumerspinBox->setValue(mieszkanie->getNumer());
			ui.PowierzchniaspinBox->setValue(mieszkanie->getPow());
			ui.LiczbaMieszkancowLabel->setText(QString::number(mieszkanie->mieszkancy.size()));
			wyswietlMieszkanca(0);
			ui.KwotaspinBox->setValue(mieszkanie->oplaty.getKwota());
			ui.ZaleglespinBox->setValue(mieszkanie->oplaty.getIlosc());
			ui.ScianyspinBox->setValue(mieszkanie->pomieszczenia.getSciany());
			ui.RuryspinBox->setValue(mieszkanie->pomieszczenia.getRury());
		}
	}
}

void Projekt3::zapiszZmiany()
{
	lokale[aktualny]->zmiana_adresu((ui.AdreslineEdit->text()).toUtf8().constData());
	lokale[aktualny]->zmiana_telefon(ui.TelefoncheckBox->isChecked());
	lokale[aktualny]->zmiana_tv(ui.TvcheckBox->isChecked());
	lokale[aktualny]->zmiana_monitoring(ui.MonitoringcheckBox->isChecked());
	lokale[aktualny]->zmiana_liczby_pomieszczen(ui.PomieszczeniaspinBox->value());

	if (lokale[aktualny]->getKlasa() == 1 || lokale[aktualny]->getKlasa() == 2) {
		LokalUzytkowy *lokal = (LokalUzytkowy*)lokale[aktualny];//RZUTOWANIE
		lokal->zmiana_rodzaju((ui.RodzajlineEdit->text()).toUtf8().constData());
		lokal->zmiana_nazwy((ui.NazwalineEdit->text()).toUtf8().constData());
		lokal->zmiana_parkingu(ui.ParkingspinBox->value());
		lokal->zmiana_liczby_pracownikow(ui.PracownicyspinBox->value());

		if (lokale[aktualny]->getKlasa() == 2) {
			Sklep *sklep = (Sklep*)lokale[aktualny];//RZUTOWANIE
			sklep->zmiana_liczby_kas(ui.KasyspinBox->value());
			sklep->zmiana_liczby_regalow(ui.RegalyspinBox->value());
			sklep->zmianaBramek(ui.BramkicheckBox->isChecked());
		}
	}
	else if (lokale[aktualny]->getKlasa() == 3) {
		Mieszkanie *mieszkanie = (Mieszkanie*)lokale[aktualny];//RZUTOWANIE
		mieszkanie->zmien_numer(ui.NumerspinBox->value());
		mieszkanie->zmiana_liczby_pomieszczen(ui.PowierzchniaspinBox->value());
		mieszkanie->oplaty.zmienKwote(ui.KwotaspinBox->value());
		mieszkanie->oplaty.zmienIlosc(ui.ZaleglespinBox->value());
		mieszkanie->pomieszczenia.zmienSciany(ui.ScianyspinBox->value());
		mieszkanie->pomieszczenia.zmienRury(ui.RuryspinBox->value());
	}

}

void Projekt3::prevMieszkaniec()
{
	wyswietlMieszkanca(aktmieszk - 1);
}

void Projekt3::nextMieszkaniec()
{
	wyswietlMieszkanca(aktmieszk + 1);
}

void Projekt3::wyswietlMieszkanca(int x)
{
	Mieszkanie *mieszkanie = (Mieszkanie*)lokale[aktualny];//RZUTOWANIE
	aktmieszk= x;
	if (x == 0) {
		ui.PrevMiesz->setEnabled(false);
	}
	else {
		ui.PrevMiesz->setEnabled(true);
	}
	if (x ==(mieszkanie->mieszkancy.size() - 1)) {
		ui.nextMiesz->setEnabled(false);
	}
	else {
		ui.nextMiesz->setEnabled(true);
	}

	
	if (mieszkanie->mieszkancy.size() == 0) {
		ui.LiczbaMieszkancowLabel->setText("brak");
		ui.PrevMiesz->setEnabled(false);
		ui.nextMiesz->setEnabled(false);
		ui.ImielineEdit->setEnabled(false);
		ui.NazwiskolineEdit->setEnabled(false);
		ui.WiekspinBox->setEnabled(false);
		ui.UsMieszButton->setEnabled(false);
		ui.MieszkaniecsavepushButton->setEnabled(false);
		return;
	}
	else {
		aktmieszk = x;
		ui.NrMieszkanca->setText(QString::number(aktmieszk));
		ui.UsMieszButton->setEnabled(true);

		ui.ImielineEdit->setEnabled(true);
		ui.NazwiskolineEdit->setEnabled(true);
		ui.WiekspinBox->setEnabled(true);
		ui.MieszkaniecsavepushButton->setEnabled(true);

		ui.ImielineEdit->setText(QString::fromStdString(mieszkanie->mieszkancy[aktmieszk].getImie()));
		ui.NazwiskolineEdit->setText(QString::fromStdString(mieszkanie->mieszkancy[aktmieszk].getNazw()));
		ui.WiekspinBox->setValue(mieszkanie->mieszkancy[aktmieszk].getWiek());

	}
}
void Projekt3::cofnij()
{
	wyswietl(aktualny);
}
/*
void Projekt3::zapiszDoPliku()
{
	ofstream out("dane.txt");
	out << lokale.size() << endl;
	for (unsigned int i = 0; i < lokale.size(); i++) {
		out << (lokale[i]->getKlasa());
		lokale[i]->zapis(out);
	}
	QMessageBox::about(this, "Zapis", "Zapisano pomyslnie do pliku dane.txt");
	out.close();
	wyswietl(0);
}

void Projekt3::odczytZPliku()
{
	ifstream in("dane.txt");
	int rozmiar;
	in >> rozmiar;
	lokale.clear();
	for (unsigned int i = 0; i < lokale.size(); i++) {
		int klasa=0;
		in >> klasa;
		if (klasa == 1)
			dodLokUz();
		else if (klasa == 2)
			dodSklep();
		else if (klasa == 3)
			dodMiesz();
		lokale[i]->odczyt(in);
	}
	in.close();
}
*/
