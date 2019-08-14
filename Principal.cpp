#include "Principal.h"

Principal::~Principal() {
  
}

Principal::Principal() {
  princeton.atualizarNome("Princeton");
  cambridge.atualizarNome("Cambridge");

  einstein.inicializar(14, 3, 1879, "Einstein", &princeton);
  newton.inicializar(4, 1, 1643, "Newton", &cambridge);

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
  
  einstein.imprimeUniversidade();
  newton.imprimeUniversidade();

  return 1;
}