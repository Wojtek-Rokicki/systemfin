// system.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "klasy.h"
#include "menedzer.h"

using namespace std;

int main() {

	menedzer Manadzer;

	Manadzer.dodajPracownika("a", new asystent(), new doktor());

	Manadzer.printList();

	Manadzer.promuj("a", new adiunkt());

	Manadzer.printList();

	return 0;
}