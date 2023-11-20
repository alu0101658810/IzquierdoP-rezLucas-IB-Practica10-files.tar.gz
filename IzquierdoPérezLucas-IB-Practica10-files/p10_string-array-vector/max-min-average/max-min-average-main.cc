/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Lucas Izquierdo Pérez alu0101658810@ull.edu.es
  * @date Nov 16 2023
  * @brief This program calcule the maximun, minimun and the average of a vector
  * @bug There are no known bugs
  */

#include <iostream>
#include <vector>
#include <iomanip>
#include "max-min-average.h"

int main() {
  std::vector<double> vector1;
  double elemento;
  while (std::cin >> elemento) {
    vector1.push_back(elemento);
  } 
  if (vector1.empty()) {
    std::cout << "No se ingresaron valores. Saliendo del programa." << std::endl;
    return 0;
  }
  double media = Average(vector1);
  double maximo = Maximum(vector1);
  double minimo = Minimum(vector1);
  std::cout << "Media: " << std::fixed << std::setprecision(2) << media << std::endl;
  std::cout << "Máximo: " << maximo << std::endl;
  std::cout << "Mínimo: " << minimo << std::endl;
 
  return 0;
}
