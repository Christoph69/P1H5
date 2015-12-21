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

// Funktionen für den Vergleich von rationalen Zahlen

// Gleichheit
bool rational_equal(rational, rational) {
  return true;
}
