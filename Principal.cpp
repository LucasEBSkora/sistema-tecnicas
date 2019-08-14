#include "Principal.h"

Principal::~Principal() {
  
}

Principal::Principal() {
  einstein.inicializar(14, 3, 1879, "Einstein");
  newton.inicializar(4, 1, 1643, "Newton");

  time_t rawTime;
  struct tm *local;

  time(&rawTime);
  local = gmtime(&rawTime);

  diaHoje = local->tm_mday;
  mesHoje = local->tm_mon + 1;
  anoHoje = local->tm_year + 1900;

  std::cout << diaHoje << "\\" << mesHoje << "\\" << anoHoje << "\n";


}

int Principal::executar() {
  
  einstein.calculaIdade(13, 8, 2019);
  newton.calculaIdade( 13, 8, 2019);

  einstein.imprimeIdade();
  newton.imprimeIdade();
  

  return 1;
}