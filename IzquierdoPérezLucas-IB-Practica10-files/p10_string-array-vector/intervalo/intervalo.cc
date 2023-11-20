/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Lucas Izquierdo Pérez alu0101658810@ull.edu.es
  * @date Nov 19 2023
  * @brief This program calcule random numbers on a interval.
  * @bug There are no known bugs
  */

#include <vector>
#include <cstdlib>
#include <ctime>
#include "intervalo.h"

std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
  std::srand(std::time(nullptr));
  std::vector<double> vector_aleatorio;
  for (int i = 0; i < size; ++i) {
    double numero = lower + (std::rand() % static_cast<int>(upper - lower + 1));
    vector_aleatorio.push_back(numero);
  }

  return vector_aleatorio;
}
