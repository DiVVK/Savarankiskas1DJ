#include "Funkcijos.h"

int meniu() {
	int op = 0;
	cout << "-------MENIU" << endl;
	cout << "1. Prideti studenta" << endl;
	cout << "2. Duomenu atvaizdavimas (Vidurkis)" << endl;
	cout << "3. Nuskaityti duomenis is failo ir rezultata pateikti i ekrana." << endl;
	cout << "4. Sugeneruoti studentu faila su atsitiktiniais balais." << endl;
	cout << "5. Studentu nuskaitymas is failo, grupavimas i vargsiukus ir kietekus, bei irasymas i du skirtingus failus." << endl;
	cout << "------------" << endl;
	cout << "9. Baigti" << endl;
	cin >> op;

	return op;
};
