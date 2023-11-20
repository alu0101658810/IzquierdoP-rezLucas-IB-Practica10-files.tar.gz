/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Lucas Izquierdo Pérez alu0101658810@ull.edu.es
  * @date Nov 19 2023
  * @brief this program calcule random numbers on a interval.
  * @bug There are no known bugs
  */

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "intervalo.h"

int main() {
  int size;
  double lower, upper;
  std::cin >> size >> lower >> upper;
  std::vector<double> my_vector = GenerateVector(size, lower, upper);
  for (const auto &value : my_vector) {
    std::cout << "Component: " << value << std::endl;
  }
  std::cout << std::endl;

  return 0;
}
