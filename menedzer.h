#pragma once
#include "klasy.h"
#include <list>

class menedzer
{
private:
	std::list<pracownik*> pracownicy;

public:
	bool dodajPracownika(string, stanowiskoDydaktyczne*, tytulNaukowy*);
	bool promuj(string, stanowiskoDydaktyczne*);
	bool sprawdzPoprawnosc(pracownik, stanowiskoDydaktyczne);
	void printList(void);
	menedzer();
	~menedzer();
};
