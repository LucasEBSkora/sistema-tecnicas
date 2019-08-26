#include "Principal.h"

#include <time.h>
#include <iostream>

Principal::~Principal() {

}

Principal::Principal() {

  descobreData();

  DAINF.setNome("DAINF");
  fisicaPrinceton.setNome("Física");
  matematicaCambridge.setNome("Matematica");

  princeton.setNome("Princeton");
  cambridge.setNome("Cambridge");
  UTFPR.setNome("UTFPR");

  einstein = Professor(14, 3, 1879, "Einstein", &princeton, &fisicaPrinceton);
  newton = Professor(4, 1, 1643, "Newton", &cambridge, &matematicaCambridge);
  simao = Professor(3, 10, 1976, "Jean Simao");

  einstein.calculaIdade(diaHoje, mesHoje, anoHoje);
  newton.calculaIdade( diaHoje, mesHoje, anoHoje);


}

int Principal::executar() {

  einstein.imprimePessoa();
  newton.imprimePessoa();

  return 1;
}

void Principal::descobreData() {

  time_t rawTime;
  struct tm *local;

  time(&rawTime);
  local = gmtime(&rawTime);

  diaHoje = local->tm_mday;
  mesHoje = local->tm_mon + 1;
  anoHoje = local->tm_year + 1900;

  std::cout << diaHoje << "\\" << mesHoje << "\\" << anoHoje << "\n";
}
