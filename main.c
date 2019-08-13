#include <stdio.h>
#include "pessoa.h"

int main() {
  Pessoa einstein;
  Pessoa newton;
  einstein.dia = 14;
  einstein.mes = 3;
  einstein.ano = 1879;
  newton.dia = 4;
  newton.mes = 1;
  newton.ano = 1643;

  einstein.idade = calculaIdade(einstein, 2019);
  newton.idade = calculaIdade(newton, 2019);
  return 0;
}
