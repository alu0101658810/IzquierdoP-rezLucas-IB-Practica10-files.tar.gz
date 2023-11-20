/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Lucas Izquierdo Pérez alu0101658810@ull.edu.es
  * @date Nov 16 2023
  * @brief This program prints the concatenation of a vector components.
  * @bug There are no known bugs
  */

#include <iostream>
#include <vector>
#include "concatenar.h"
std::vector<int> Concatenar(const std::vector<double>& vector1, const std::vector<double>& vector2) {
  std::vector<int> concatenacion;
  for (int i = 0; i < vector1.size(); ++i) {
    concatenacion.push_back(static_cast<int>(vector1[i]));
  }
  for (int i = 0; i < vector2.size(); ++i) {
    concatenacion.push_back(static_cast<int>(vector2[i]));
  }

  return concatenacion;
}

