#include <iostream>
#include "../inc/rational.h"
#include "../inc/rational_IO.h"
#include "../inc/rational_arr.h"
#include "../inc/rational_help.h"

/* Konstanten */
const unsigned int ARRAY_ELEMENTE = 5;

int main(int argc, char const *argv[]) {
  std::cout << "Hausaufgaben Nr. 5" << std::endl;

  // Test für Hauptnennerbildung
  rational zahl3, zahl4;

  zahl3 = input_rational();
  zahl4 = input_rational();

  // Test auf Gleichheit
  bool gleichheit = rational_equal(zahl3, zahl4);
  std::cout << "Gleichheit: " << gleichheit << std::endl;

  // Test auf Ungleichheit
  bool ungleichheit = rational_unequal(zahl3, zahl4);
  std::cout << "Ungleichheit: " << ungleichheit << std::endl;

  // Test auf kleiner als
  bool kleinerals = rational_less(zahl3, zahl4);
  std::cout << "kleiner als: " << kleinerals << std::endl;

  // Test auf kleiner als oder gleich
  bool kleinergleich = rational_less_or_equal(zahl3, zahl4);
  std::cout << "kleiner als oder gleich: " << kleinergleich << std::endl;

  // Test auf größer als
  bool größerals = rational_greater(zahl3, zahl4);
  std::cout << "größer als: " << größerals << std::endl;

  // Test auf größer als oder gleich
  bool größergleich = rational_greater_or_equal(zahl3, zahl4);
  std::cout << "größer als oder gleich: " << größergleich << std::endl;

  /*
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
   */

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
