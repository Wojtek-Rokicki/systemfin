#include "stdafx.h"
#include <iostream>
#include "klasy.h"

using namespace std;

class inzynier;
class asystent;

pracownik::pracownik(const string & in = "brak imienia, nazwiska", tytulNaukowy * tyt = nullptr, stanowiskoDydaktyczne* stan = nullptr) {
	imieNazwisko = in;
	tytul = tyt;
	stanowisko = stan;
}

pracownik::~pracownik() {
	delete this->stanowisko;
	delete this->tytul;
}

void pracownik::zmienStanowisko(stanowiskoDydaktyczne *noweStanowisko) {
	stanowiskoDydaktyczne *stareStanowisko = this->stanowisko;
	this->stanowisko = noweStanowisko;
	delete stareStanowisko;
}