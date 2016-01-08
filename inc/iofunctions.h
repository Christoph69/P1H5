// iofunctions.h Header
#ifndef IOFUNCTIONS_H_
#define IOFUNCTIONS_H_

// Konstanten für das Menü, und Bennung der Menüpunkte
// Angaben zum Menü, Anzahl der Unterpunkte(MENU_SIZE) und deren maximale Zeichenlänge(MENU_MAX_CHAR)
const size_t MENU_SIZE = 4, MENU_MAX_CHAR = 32;
// Array mit den Menüpunkten
char* menu[MENU_SIZE][MENU_MAX_CHAR] = { "Hallo", "Test", "Hund", "Katze" };

// Eingabe einer nicht negativen double Zahl, falls die Eingabe nicht korrekt ist, wird eine weitere
// Aufforderung zur Eingabe eingeleitet.
// Der Funktion kann als Parameter eine Zeichenkette übergeben werden, mit dieser wird der einzugebene
// Wert bezeichnet.
double ask4DoubleNonneg(char* name = "Zahl");

// Eingabe einer INT-Zahl in einen geschlossenen Intervalls, falls die Eingabe nicht korrekt ist, wird
// eine weitere Aufforderung zur Eingabe eingeleitet.
// Der Funktion kann als Parameter eine Zeichenkette übergeben werden, mit dieser wird der einzugebene
// Wert bezeichnet. Als zweiten und dritten Parameter gibt man die Grenzen des Intervalls an, als 
// Standard für die Grenzen sind INT_MIN und INT_MAX gesetzt. Werden die Grenzen falsch gesetzt wird eine
// Warnung in der Konsole ausgeben!
// Benutzung: ask4IntInBounds("Zeichenkette", untereGrenze, obereGrenze);
int ask4IntInBounds(char* name = "Zahl", int min = INT_MIN, int max = INT_MAX);

// Eingabe einer DBL-Zahl in einen geschlossenen Intervalls, falls die Eingabe nicht korrekt ist, wird
// eine weitere Aufforderung zur Eingabe eingeleitet.
// Der Funktion kann als Parameter eine Zeichenkette übergeben werden, mit dieser wird der einzugebene
// Wert bezeichnet. Als zweiten und dritten Parameter gibt man die Grenzen des Intervalls an, als 
// Standard für die Grenzen sind DBL_MIN und DBL_MAX gesetzt. Werden die Grenzen falsch gesetzt wird eine
// Warnung in der Konsole ausgeben!
// Benutzung: ask4DoubleInBounds("Zeichenkette", untereGrenze, obereGrenze);
double ask4DoubleInBounds(char* name = "Zahl", double min = DBL_MIN, double max = DBL_MAX);

// Eingabe einer DBL-Zahl in einen geschlossenen Intervalls, falls die Eingabe nicht korrekt ist, wird
// eine weitere Aufforderung zur Eingabe eingeleitet.
// Der Funktion kann als Parameter eine Zeichenkette übergeben werden, mit dieser wird der einzugebene
// Wert bezeichnet. Als zweiten und dritten Parameter gibt man die Grenzen des Intervalls an, als 
// Standard für die Grenzen sind DBL_MIN und DBL_MAX gesetzt. Werden die Grenzen falsch gesetzt wird eine
// Warnung in der Konsole ausgeben! Weiter ist es möglich als vierten und fünften Parameter zu entscheiden
// ob es ein offenes oder geschlossenes Intervall ist, wobei 1 = geschlossenes und 0 = offenes Intervall ist.
// Benutzung: ask4IntInBounds("Zeichenkette", untereGrenze, obereGrenze, IntervallArt, IntervallArt);
double ask4DoubleWithConstraints(char* name = "Zahl", double min = DBL_MIN, double max = DBL_MAX, int min_border = 1, int max_border = 1);

// Funktion gibt ein Menu aus, und fordert eine Eingabe eines gewünschten Menüpunktes, diesen liefert die 
// Funktion auch zurück, bei falscher Eingabe wird die Eingabe erneut gestartet!
// Es müssen 3 Parameter übergeben weren:
// 1. 'Zeichenkette' zur Benennung des Menüs
// 2. 'Array von Zeichenketten' zur Benennung der Menüpunkte, dieses Array ist im Header "iofunctions.h" 
//	  vordefiniert und sollte dort nach belieben angepasst werden. Weitere Anweisungen sind dort als 
//	  Kommentar vorhanden!
// 3. Anzahl der Menüpunkte
// Benutzung: chooseFromMenu(Zeichenkette, Array von Zeichenketten, Anzahl der Menüpunkte);
unsigned int chooseFromMenu(char*, char** menu, unsigned int elements);

#endif