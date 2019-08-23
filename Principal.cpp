#include "Principal.h"

#include <time.h>
#include <iostream>

Principal::~Principal() {

}

Principal::Principal() {

  DAINF.setNome("DAINF");


  princeton.setNome("Princeton");
  cambridge.setNome("Cambridge");

  einstein = Professor(14, 3, 1879, "Einstein", &princeton, &fisicaPrinceton);
  newton = Professor(4, 1, 1643, "Newton", &cambridge, &matematicaCambridge);

  time_t rawTime;
  struct tm *local;

  time(&rawTime);
  local = gmtime(&rawTime);

  diaHoje = local->tm_mday;
  mesHoje = local->tm_mon + 1;
  anoHoje = local->tm_year + 1900;

  std::cout << diaHoje << "\\" << mesHoje << "\\" << anoHoje << "\n";

  einstein.calculaIdade(13, 8, 2019);
  newton.calculaIdade( 13, 8, 2019);


}

int Principal::executar() {

  einstein.imprimePessoa();
  newton.imprimePessoa();

  return 1;
}
