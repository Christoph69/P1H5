////////////////////////////////////////////////////////////////

/* Funktionen für das rechnen mit rationalen Zahlen als bruch */

////////////////////////////////////////////////////////////////
#include "../inc/rational.h"
#include "../inc/rational_help.h"


// Summe zweier r.Zahlen
rational add(rational zahl1, rational zahl2) {
  rational ergebnis;

  ergebnis.denominator = zahl1.denominator * zahl2.denominator;
  ergebnis.numerator   = zahl1.numerator * zahl2.denominator + zahl2.numerator *
                         zahl1.denominator;
  return signTest(smallestCommonMultiple(ergebnis));
}

// Differenz zweier r.Zahlen
rational sub(rational zahl1, rational zahl2) {
  rational ergebnis;

  ergebnis.denominator = zahl1.denominator * zahl2.denominator;
  ergebnis.numerator   = zahl1.numerator * zahl2.denominator - zahl2.numerator *
                         zahl1.denominator;
  return signTest(smallestCommonMultiple(ergebnis));
}

// Multiplikation zweier r.Zahlen
rational mul(rational zahl1, rational zahl2) {
  rational ergebnis;

  ergebnis.denominator = zahl1.denominator * zahl2.denominator;
  ergebnis.numerator   = zahl1.numerator * zahl2.numerator;
  return signTest(smallestCommonMultiple(ergebnis));
}

// Quotient zweier r.Zahlen
rational div(rational zahl1, rational zahl2) {
  rational ergebnis;

  ergebnis.denominator = zahl1.denominator * zahl2.numerator;
  ergebnis.numerator   = zahl1.numerator * zahl2.denominator;
  return signTest(smallestCommonMultiple(ergebnis));
}

// rationale Zahl in eine double Zahl konvertieren
double as_double(rational zahl) {
  double ergebnis, zaehler = zahl.numerator, nenner = zahl.denominator;

  return ergebnis = zaehler / nenner;
}

/////////////////////////////////////////////////////

// Funktionen für den Vergleich von rationalen Zahlen

/////////////////////////////////////////////////////

// Vergleich auf Gleichheit
bool rational_equal(rational zahl1, rational zahl2) {
  // Hauptnenner bilden mithilfe der Hilfsfunktions
  same_denominator(&zahl1, &zahl2);

  // Vergleich auf Gleichheit
  if (zahl1.numerator == zahl2.numerator) return true;
  else return false;
}

// Vergleich auf Ungleichheit
bool rational_unequal(rational zahl1, rational zahl2) {
  if (rational_equal(zahl1, zahl2)) return false;
  else return true;
}

// Vergleich auf kleiner als
bool rational_less(rational zahl1, rational zahl2) {
  same_denominator(&zahl1, &zahl2);

  // Vergleich auf zahl1 kleiner als zahl2
  if (zahl1.numerator < zahl2.numerator) return true;
  else return false;
}

// Vergleich auf kleiner als oder gleich
bool rational_less_or_equal(rational zahl1, rational zahl2) {
  if (rational_less(zahl1, zahl2) || rational_equal(zahl1, zahl2)) return true;
  else return false;
}

// Vergleich auf größer als
bool rational_greater(rational zahl1, rational zahl2) {
  same_denominator(&zahl1, &zahl2);

  // Vergleich auf zahl1 größer als zahl2
  if (zahl1.numerator > zahl2.numerator) return true;
  else return false;
}

// Vergleich auf größer oder gleich als
bool rational_greater_or_equal(rational zahl1, rational zahl2) {
  if (rational_equal(zahl1, zahl2) || rational_greater(zahl1, zahl2)) return true;
  else return false;
}
