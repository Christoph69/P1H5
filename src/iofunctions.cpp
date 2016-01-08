// iofunctions.cpp
#include <iostream>
using namespace std;

// Hilfsfunktionen
// Überprüft die Gültigkeit der Intervallsgrenzen.
static void borderCheck(double min, double max, int border_min = 1, int border_max = 1){
	if (min > max) {
		cerr << "Intervall falsch vorgegeben, im Funkstionsaufruf!\n";
		system("PAUSE");
		exit(1);
	}
	if ((border_min == 0 || border_max == 0) && (min == max)){
		cerr << "Intervallart falsch vorgegeben, im Funkstionsaufruf!\n";
		system("PAUSE");
		exit(1);
	}
}
// Überprüft die Gültigkeit der Eingabe und löscht bei Fehler den Eingabebuffer und stellt die
// Standard Fehlerbits wieder her.
static bool istGueltig(){
	char rest[32];
	cin.getline(rest, 32);
	if (cin.fail() || (strlen(rest) > 0)){
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		return false;
	}
	return true;
}


// Funktionen
double ask4DoubleNonneg(char* name){
	double wert;
	bool gueltig = false;
	do{
		cout << "Bitte einen nicht negativen Wert fuer " << name << " eingeben: ";
		cin >> wert;
		gueltig = istGueltig();
		if (!gueltig || (wert < 0))
			cout << ">> Falsche Eingabe! <<\n";
		else
			cout << "Der eingegebene Wert ist: " << wert << endl;
	} while (!gueltig || (wert < 0));
	return wert;
}

int ask4IntInBounds(char* name, int min, int max){
	int wert;
	bool gueltig = false;
	borderCheck(min, max);
	do{
		cout << "Bitte einen Ganzzahlwert fuer " << name << " im Bereich von " << min << " bis " << max << " eingeben: ";
		cin >> wert;
		gueltig = istGueltig();
		if (!gueltig || (wert > max) || (wert < min))
			cout << ">> Falsche Eingabe! <<\n";
		else
			cout << "Der eingegebene Wert ist: " << wert << endl;
	} while (!gueltig || (wert > max) || (wert < min));
	return wert;
}

double ask4DoubleInBounds(char* name, double min, double max){
	double wert;
	bool gueltig = false;
	borderCheck(min, max);
	do{
		cout << "Bitte eine Zahl fuer " << name << " im Bereich von " << min << " bis " << max << " eingeben: ";
		cin >> wert;
		gueltig = istGueltig();
		if (!gueltig || (wert > max) || (wert < min))
			cout << ">> Falsche Eingabe! <<\n";
		else
			cout << "Der eingegebene Wert ist: " << wert << endl;
	} while (!gueltig || (wert > max) || (wert < min));
	return wert;
}

double ask4DoubleWithConstraints(char* name, double min, double max, int min_border, int max_border){
	bool minTest, maxTest, gueltig = false;
	double wert;
	borderCheck(min, max, min_border, max_border);
	do{
		minTest = false, maxTest = false;
		cout << "Bitte eine Zahl fuer " << name << " im Bereich von " << min;
		if (min_border == 1)
			cout << "(geschlossene Grenze)";
		else
			cout << "(offene Grenze)";
		cout << " bis " << max;
		if (max_border == 1)
			cout << "(geschlossene Grenze)";
		else
			cout << "(offene Grenze)";
		cout << " eingeben: ";
		cin >> wert;
		gueltig = istGueltig();
		if (min_border == 0 && wert == min)
			minTest = true;
		if (max_border == 0 && wert == max)
			maxTest = true;
		if (!gueltig || (wert > max) || (wert < min) || minTest || maxTest)
				cout << ">> Falsche Eingabe! <<\n";
		else
			cout << "Der eingegebene Wert ist: " << wert << endl;
	} while (!gueltig || (wert > max) || (wert < min) || minTest || maxTest);
	return wert;
}

unsigned int chooseFromMenu(char* name, char** menu, unsigned int elements){
	cout << name << ":\n";
	for (int i = 0; i < elements; i++){
		cout << " -" << i << "- " << menu[i] << endl;
	}
	unsigned int wahl = ask4IntInBounds("Auswahl", 0, elements-1);
	cout << "Sie haben sich fuer -" << wahl << "- " << menu[wahl] << " entschieden!\n";
	return wahl;
}