#include <iostream>
#include "pessoa.h"

int main() {
  Pessoa einstein(14, 3, 1879);
  Pessoa newton(4, 1, 1643);
  
  einstein.calculaIdade(13, 8, 2019);
  newton.calculaIdade( 13, 8, 2019);

  std::cout << "a idade de einstein seria " <<  einstein.informaIdade() << '\n';
  std::cout << "a idade de newton seria " <<  newton.informaIdade() << '\n';
  return 0;
}
