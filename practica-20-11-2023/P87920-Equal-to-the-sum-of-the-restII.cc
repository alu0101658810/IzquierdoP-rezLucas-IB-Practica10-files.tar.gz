#include <iostream>
#include <vector>

int main() {
  int knumero;
  while (std::cin >> knumero) {
    std::vector<int> v(knumero);
    int suma = 0;
    for (int i = 0; i < knumero; ++i) {
      std::cin >> v[i];
      suma += v[i];
    }
    bool encontrado = false;
    int i = 0;
    while (!encontrado && i < knumero) {
      encontrado = (v[i] == suma - v[i]);
      ++i;
    }
    if (encontrado) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }
  return 0;
}
