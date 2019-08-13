#include "Principal.h"

Principal::Principal() {
  einstein.inicializar(14, 3, 1879, "Einstein");
  newton.inicializar(4, 1, 1643, "Newton");
}

int Principal::executar() {
  
  einstein.calculaIdade(13, 8, 2019);
  newton.calculaIdade( 13, 8, 2019);

  einstein.imprimeIdade();
  newton.imprimeIdade();
  

  return 1;
}