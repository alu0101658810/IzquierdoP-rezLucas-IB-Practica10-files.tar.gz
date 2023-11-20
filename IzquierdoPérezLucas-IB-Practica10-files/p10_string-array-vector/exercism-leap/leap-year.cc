/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file lap_year.cc
  * @author Lucas Izquierdo Pérez@ull.edu.es
  * @date Nov 18 2023
  * @brief The program reads a year and prints YES or NO if it is a lap year. 
  * @bug There are no known bugs
  */

#include <iostream>
#include "leap-year.h"
int main() {
  int year;
  std::cin >> year;
  if (EsBisiesto(year)) {
    std::cout << "YES" << std::endl;
  }
  else {
    std::cout << "NO" << std::endl;
  }

  return 0;
}
