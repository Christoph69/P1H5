#include <iostream>
#include "../inc/rational.h"
#include "../inc/rational_IO.h"
#include "../inc/rational_arr.h"

/* Konstanten */
const unsigned int ARRAY_ELEMENTE = 5;

int main(int argc, char const *argv[]) {
  std::cout << "Hausaufgaben Nr. 5" << std::endl;

  /*
     rational testzahl1, testzahl2;
     testzahl1.numerator = 1;
     testzahl1.denominator = -3;
     testzahl2.numerator = 2;
     testzahl2.denominator = 9;
   */
  rational array[ARRAY_ELEMENTE];

  for (int i = 0; i < ARRAY_ELEMENTE; i++) array[i] = input_rational();
  std::cout << "Arithmetisches Mittel: " << std::endl;
  print_rational(rational_average(array, ARRAY_ELEMENTE));
  std::cout << "Double: "
            << as_double(rational_average(array, ARRAY_ELEMENTE))
            << std::endl;
  std::cout << "Fehlerquadrat: " << std::endl;
  print_rational(average_mistake(array, ARRAY_ELEMENTE));
  std::cout << "Double: "
            << as_double(average_mistake(array, ARRAY_ELEMENTE))
            << std::endl;

  /*
     testzahl1 = input_rational();
     testzahl2 = input_rational();

     rational ergeb = add(testzahl1, testzahl2);
     print_rational(ergeb);
     rational ergeb2 = sub(testzahl1, testzahl2);
     print_rational(ergeb2);
     rational ergebnis3 = mul(testzahl1, testzahl2);
     print_rational(ergebnis3);
     rational ergebnis4 = div(testzahl1, testzahl2);
     print_rational(ergebnis4);
   */
  return 0;
}
