///////////////////////////////////////////////////////////////

/* Funktionen für die Fehlerberechnung mit rationalen Zahlen */

///////////////////////////////////////////////////////////////
#include "../inc/rational.h"
#include "../inc/rational_help.h"

// Funktion für arithmetische Mittel von rationalen Zahlen
rational rational_average(rational *rArray, unsigned int Elements) {
  rational arr;

  arr.numerator   = 0;
  arr.denominator = 1;

  for (int i = 0; i < Elements; i++) {
    arr = add(arr, rArray[i]);
  }
  arr.denominator *= Elements;
  return signTest(smallestCommonMultiple(arr));
}

// Funktion die aus dem arithmetischen Mittel und dem Array der rationalen
// Zahlen das mittlere Fehler Quadrat berechnet.
rational average_mistake(rational *rArray, unsigned int Elements) {
  rational arr = rational_average(rArray, Elements), mistake;

  mistake.numerator   = 0;
  mistake.denominator = 1;

  for (int i = 0; i < Elements; i++) {
    mistake =
      smallestCommonMultiple(add(mistake, exponent2(sub(rArray[i], arr))));
  }
  mistake.denominator *= Elements;
  return signTest(mistake);
}
