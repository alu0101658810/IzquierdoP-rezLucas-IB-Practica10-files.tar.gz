/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Lucas Izquierdo Pérez alu0101658810@ull.edu.es
  * @date Nov 18 2023
  * @brief This program calcule a sum of an elements in a vector
  * @bug There are no known bugs
  */

#include <iostream>
#include <vector>
#include "reduce-suma.h"

int main() {
  int size;
  std::cin >> size;
  std::vector<double> my_vector;
  for (int i = 0; i < size; i++) {
    double elemento;
    std::cin >> elemento;
    my_vector.push_back(elemento);
  }
  double resultado = Vector(my_vector, size);
  std::cout << resultado << std::endl;
  
  return 0;
}
