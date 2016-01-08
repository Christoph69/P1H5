/* Header für das berechnen des mittleren Fehlerquadrate */
#ifndef RATIONAL_ARR_H
#define RATIONAL_ARR_H
#include "../inc/rational.h"

// Funktion die das aritmetische Mittel aus einem Array von rationalen Zahlen
// berechnet! Es ist das Array von rationalen Zahlen sowie deren Anzahl als
// Parameter zu übergeben. Das Ergebnis wird als 'struct rational' zurückgeben.
rational rational_average(rational *,    // Array aus 'struct rational' - Werten
                          unsigned int); // Anzahl der Elemente im Array

// Funktion die aus dem arithmetischen Mittel und dem Array der rationalen
// Zahlen das mittlere Fehler Quadrat berechnet und als 'struct rational'
// zurückgibt.
rational average_mistake(rational *,    // Array aus 'struct rational' - Werten
                         unsigned int); // Anzahl der Elemente im Array
// test test test
#endif /* RATIONAL_ARR_H */
