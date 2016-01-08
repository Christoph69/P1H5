///////////////////////////////////////////////////////////

/* Funktionen zur Ein- und Ausgabe von rationalen Zahlen */

///////////////////////////////////////////////////////////
#include "../inc/rational.h"
#include "../inc/rational_IO.h"
#include "../inc/rational_help.h"
#include "../inc/iofunctions.h"
#include <iostream>

// Funktion zur Eingabe von einer rationalen Zahl
rational input_rational() {
  rational zahl;

  // std::cout << "Bitte Wert für den Zaehler eingeben: ";
  zahl.numerator = ask4LongInBounds("Nenner");

  // std::cout << "Bitte Wert für den Nenner eingeben: ";
  zahl.denominator = ask4LongInBounds("Zähler");
  std::cout << "Ihre Eingabe war: ";

  print_rational(signTest(smallestCommonMultiple(zahl)));
  return signTest(smallestCommonMultiple(zahl));
}

// Funktion zur Ausgabe einer rationalen Zahl
void print_rational(rational zahl) {
  std::cout << zahl.numerator << "/" << zahl.denominator << std::endl;
}
