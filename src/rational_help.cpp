//////////////////////////////////////////

/* Hilfsfunktionen für rationale Zahlen */

//////////////////////////////////////////
#include "../inc/rational.h"

// Betrag bilden
long absolut(long wert) {
  if (wert <      0) return wert * -1;

  return wert;
}

// größter gemeinsamer Teiler (ggT)
long ggT(rational zahl) {
  while (zahl.denominator != 0) {
    long h = zahl.numerator % zahl.denominator;
    zahl.numerator   = zahl.denominator;
    zahl.denominator = h;
  }
  return absolut(zahl.numerator);
}

// kleinstes gemeinsames Vielfache (kgV)
rational smallestCommonMultiple(rational zahl) {
  long teiler = ggT(zahl);

  zahl.numerator   /= teiler;
  zahl.denominator /= teiler;
  return zahl;
}

// Vorzeichenprüfung
rational signTest(rational zahl) {
  if (zahl.denominator < 0) {
    zahl.numerator   *= -1;
    zahl.denominator *= -1;
  }
  return zahl;
}

// zweite Potenz einer rationalen Zahl
rational exponent2(rational zahl) {
  zahl = mul(zahl, zahl);
  return zahl;
}

// bringt zwei rationale Zahlen auf den gleichen Hauptnenner
void same_denominator(rational *zahl1, rational *zahl2) {
  // Hauptnenner bilden um die Zahlen vergleichen zu können
  long backup_denominator1 = zahl1->denominator,
       backup_denominator2 = zahl2->denominator;

  zahl1->denominator *= backup_denominator2;
  zahl2->denominator *= backup_denominator1;

  // Zähler der beiden zu vergleichenden Zahlen anpassen
  zahl1->numerator *= backup_denominator2;
  zahl2->numerator *= backup_denominator1;
}
