/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file lap-year.cc
  * @author Lucas Izquierdo Pérez alu0101658810@ull.edu.es
  * @date Nov 28 2023
  * @brief The program reads a year and prints YES or NO if it is a lap year. 
  * @bug There are no known bugs
  */

#include "leap-year.h"

bool EsBisiesto(const int year) {
  int resto1 = year % 4;
  int resto2 = year % 100;
  int resto3 = year % 400; 
  if ((resto1 == 0 && resto2 != 0) || (resto3 == 0)) {
    return true;
  }
  else {
    return false;
  }
}
