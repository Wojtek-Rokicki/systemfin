#pragma once
#ifndef KLASY_H_
#define KLASY_H_

#include <iostream>
#include <string>

using namespace std;

class stanowiskoDydaktyczne {
protected:
	string stanowisko;
public:
	stanowiskoDydaktyczne() { stanowisko = "Brak stanowiska"; }

	virtual const string wstanowisko() const { return stanowisko; }

};

class asystent : public stanowiskoDydaktyczne {
public:
	asystent() { stanowisko = "Asystent"; }
};

class adiunkt : public asystent {
public:
	adiunkt() { stanowisko = "Adiunkt"; }
};

class profesorNadzwyczajny : public adiunkt {
public:
	profesorNadzwyczajny() { stanowisko = "Profesor Nadzwyczajny"; }
};

class profesorZwyczajny : public profesorNadzwyczajny {
public:
	profesorZwyczajny() { stanowisko = "Profesor Zwyczajny"; }
};

class tytulNaukowy {
protected:
	string tytul;
public:
	tytulNaukowy() { tytul = "Brak tytulu"; }
	virtual const string wtytul() const { return tytul; }
};

class inzynier : public tytulNaukowy {
public:
	inzynier() { tytul = "inz."; }
};

class magister : public inzynier {
public:
	magister() { tytul = "mgr. inz."; }

};

class doktor : public magister {
public:
	doktor() { tytul = "dr. mgr. inz."; }
};

class habdoktor : public doktor {
public:
	habdoktor() { tytul = "hab. dr. mgr. inz."; }
};

class profesor : public habdoktor {
public:
	profesor() { tytul = "prof. hab. dr. mgr. inz."; }
};

class pracownik {
private:
	string imieNazwisko;
	tytulNaukowy * tytul;
	stanowiskoDydaktyczne * stanowisko;
public:
	pracownik(const string & in, tytulNaukowy * tyt, stanowiskoDydaktyczne * stan);
	const string wimieNazwisko() const { return imieNazwisko; }
	const string wtytul() const { return this->tytul->wtytul(); }
	const string wstanowisko() const { return stanowisko->wstanowisko(); }
	const string winfo() const { cout << wimieNazwisko() << endl << wtytul() << endl << wstanowisko() << endl; return "a"; }
	virtual ~pracownik();

	void zmienStanowisko(stanowiskoDydaktyczne *noweStanowisko);

};

#endif

//dziekan co najmniej dr hab
//prodziekan co najmniej dr

//dyr. co najmniej dr hab
//kierownik zakl co najmniej dr hab

//zast co najmniej mgr