///////////////////////////////////////////////////////////

/* Header für die Ein- und Ausgabe von rationalen Zahlen */

///////////////////////////////////////////////////////////
#ifndef RATIONAL_IO_H
#define RATIONAL_IO_H
#include "../inc/rational.h" // für struct rational

// Funktion zur Eingabe von einer rationalen Zahl, es wird kein Parameter
// übergeben. Der Zähler und der Nenner werden hierbei getrennt eingelesen und
// dann in einen 'struct rational' zusammengeführt und von der Funktion
// zurückgeben.
rational input_rational();

// Funktion zur Ausgabe einer rationalen Zahl in der Form 'Zähler/Nenner' mit
// ggf. einem neg. Vorzeichen vor dem Zähler
void print_rational(rational); // Die auszugebene rationale Zahl muss als
                               // Parameter übergeben werden

#endif /* RATIONAL_IO_H */
