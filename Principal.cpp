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

  einstein = Professor(0, Data(14, 3, 1879), "Einstein", &princeton, &fisicaPrinceton);
  newton = Professor(0, Data(4, 1, 1643), "Newton", &cambridge, &matematicaCambridge);


  einstein.calculaIdade(dataAtual);
  newton.calculaIdade(dataAtual);


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

  int diaHoje = local->tm_mday;
  int mesHoje = local->tm_mon + 1;
  int anoHoje = local->tm_year + 1900;

  dataAtual = Data(diaHoje, mesHoje, anoHoje);


  std::cout << dataAtual.paraTexto() << '\n';
}
