/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Lucas Izquierdo Pérez alu0101658810@ull.edu.es
  * @date Nov 16 2023
  * @brief This program is a max_min_average.cc complement. 
  * @bug There are no known bugs
  */

#include <iostream>
#include <vector>
#include <iomanip>
#include "max-min-average.h"

double Average(const std::vector<double>& vector1) {
  double media = 0;
  for (int i = 0; i < vector1.size(); ++i) {
    media += vector1[i];
  }
  return media / vector1.size();
}

double Maximum(const std::vector<double>& vector1) {
  double max = vector1[0]; 
  for (int i = 1; i < vector1.size(); ++i) {
    if (vector1[i] > max) {
      max = vector1[i];
    }
  }
  return max;
}

double Minimum(const std::vector<double>& vector1) {
  double min = vector1[0]; 
  for (int i = 1; i < vector1.size(); ++i) {
    if (vector1[i] < min) {
      min = vector1[i];
    }
  }
  return min;
}
