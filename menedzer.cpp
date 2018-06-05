#include "stdafx.h"
#include <list>
#include "menedzer.h"


bool menedzer::dodajPracownika(string imie, stanowiskoDydaktyczne *stan, tytulNaukowy *tyt)
{
	pracownicy.push_back(new pracownik(imie, tyt, stan));

	return false;
}

bool menedzer::promuj(string imie, stanowiskoDydaktyczne *stan)
{
	std::list<pracownik*>::iterator it;

	for (it = pracownicy.begin(); it != pracownicy.end(); it++) {
		if ((*it)->wimieNazwisko() == imie && sprawdzPoprawnosc(*(*it), *stan)) {
			(*it)->zmienStanowisko(stan);
			return true;
		}
	}

	return false;
}

bool menedzer::sprawdzPoprawnosc(pracownik pr, stanowiskoDydaktyczne stan)
{
	return true;
}

void menedzer::printList(void)
{
	std::list<pracownik*>::iterator it;

	for (it = pracownicy.begin(); it != pracownicy.end(); it++) {
		(*it)->winfo();
	}
}

menedzer::menedzer()
{
	pracownicy.clear();
}


menedzer::~menedzer()
{
	std::list<pracownik*>::iterator it;

	for (it = pracownicy.begin(); it != pracownicy.end(); it++) {
		delete *it;
	}
}
