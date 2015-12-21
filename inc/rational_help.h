/////////////////////////////////////////////////////

/* Header für Hilfsfunktionen für rationale Zahlen */

/////////////////////////////////////////////////////
#ifndef RATIONAL_HELP_H
#define RATIONAL_HELP_H
#include "../inc/rational.h" // für struct rational

// Betrag bilden
long     absolut(long);

// größter gemeinsamer Teiler (ggT)
long     ggT(rational);

// kleinstes gemeinsames Vielfache (kgV)
rational smallestCommonMultiple(rational);

// Vorzeichenprüfung
rational signTest(rational);

// zweite Potenz einer rationalen Zahl
rational exponent2(rational);


#endif /* RATIONAL_HELP_H */
