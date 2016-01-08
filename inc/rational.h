////////////////////////////////////////////////////////

/* Basic Header für das Rechnen mit rationalen Zahlen */

////////////////////////////////////////////////////////
#ifndef RATIONAL_H
#define RATIONAL_H

// Verbund-Datenstrukur für rationale Zahlen, damit können wir die rationalen
// Zahlen in Zähler und Nenner schreibweise darstellen, somit können
// Rundungsfehler vermieden werden.
typedef struct {
  long numerator;
  long denominator;
} rational;

// Funktionen zum rechnen mit rationalen Zahlen Summe zweier r.Zahlen
rational add(rational,
             rational);

// Differenz zweier r.Zahlen
rational sub(rational,
             rational); // zweiter übergebener Parameter wird vom ersten
                        // abgezogen

// Multiplikation zweier r.Zahlen
rational mul(rational,
             rational);

// Quotient zweier r.Zahlen
rational div(rational, // wird durch zweiten Parameter geteilt
             rational);

// rationale Zahl in eine double Zahl konvertieren
double as_double(rational);

//////////////////////////////////////////////////////////////////////////

// Vergleichsfunktionen für rationale Zahlen in der Form 'struct rational'

//////////////////////////////////////////////////////////////////////////

// Vergleich auf Gleichheit
bool rational_equal(rational, rational);

// Vergleich auf Ungleichheit
bool rational_unequal(rational, rational);

// Vergleich auf kleiner als, und zwar der erste Parameter kleiner als der
// zweite Parameter
bool rational_less(rational, rational);

// Vergleich auf kleiner oder gleich als, und zwar der erste Parameter größer
// als der zweite Parameter
bool rational_less_or_equal(rational, rational);

// Vergleich auf größer als
bool rational_greater(rational, rational);

// Vergleich auf größer oder gleich als
bool rational_greater_or_equal(rational, rational);

#endif /* RATIONAL_H */
