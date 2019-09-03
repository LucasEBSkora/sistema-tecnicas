#include "Principal.h"

#include <iostream>
#include "utils/String.h"

Principal::~Principal() {

}

Principal::Principal() :
  idAtual{0},
  princeton{idAtual++, String("Princeton")},
  cambridge{idAtual++, String("Cambridge") },
  UTFPR{idAtual++, String("UTFPR")},
  DAINF{idAtual++, String("DAINF"), &UTFPR},
  fisicaPrinceton{idAtual++, String("Department of Phisics"), &princeton },
  matematicaCambridge{idAtual++, String("Faculty of Mathematics"), &cambridge },
  simao{idAtual++, Data(3, 10, 1976), String("Simao"), &UTFPR, &DAINF},
  newton{idAtual++, Data(4, 1, 1643), String("Newton"), &cambridge, &matematicaCambridge},
  einstein{idAtual++, Data(14, 3, 1879), String("Einstein"), &princeton, &fisicaPrinceton},
  tecProg{idAtual++, String("Tecnicas de Programacao"), String("Computacao"), 44},
  fundProg1{idAtual++, String("Fundamentos de Programacao 1"), String("Computacao"), 44},
  intrLog{idAtual++, String("Introducao a Logica para Computacao"), String("Computacao"), 44},
  thiago{idAtual++, Data(26, 10, 2000), String("Thiago de Mendonca Mildemberger"), 123},
  franco{idAtual++, Data(11, 1, 2002), String("Franco Barpp Gomes"), 432},
  lucas{idAtual++, Data(27, 11, 2000), String("Lucas Eduardo Bonancio Skora"), 171},
  dataAtual{Data::atual()}
 {
   inicProfessores();
   inicUniversidades();
   inicDepartamentos();
   inicDisciplinas();
   inicAlunos();
}

int Principal::executar() {

  imprimeProfessores();
  imprimeUniversidades();
  imprimeDepartamentos();
  imprimeDisciplinas();
  imprimeAlunos();
  return 0;
}

void Principal::inicProfessores() {
  simao.calculaIdade(dataAtual);
  einstein.calculaIdade(dataAtual);
  newton.calculaIdade(dataAtual);
}

void Principal::inicUniversidades() {
  UTFPR.adicionarDepartamento(&DAINF);
  cambridge.adicionarDepartamento(&matematicaCambridge);
  princeton.adicionarDepartamento(&fisicaPrinceton);
}

void Principal::inicDepartamentos() {
  DAINF.adicionarDisciplina(&tecProg);
  DAINF.adicionarDisciplina(&fundProg1);
  DAINF.adicionarDisciplina(&intrLog);
}

void Principal::inicDisciplinas() {
  intrLog.adicionarAluno(&franco);
  fundProg1.adicionarAluno(&thiago);
  fundProg1.adicionarAluno(&lucas);
  tecProg.adicionarAluno(&franco);
  tecProg.adicionarAluno(&thiago);
  tecProg.adicionarAluno(&lucas);

}

void Principal::inicAlunos() {
  thiago.calculaIdade(dataAtual);
  franco.calculaIdade(dataAtual);
  lucas.calculaIdade(dataAtual);
}

void Principal::imprimeProfessores() {
  simao.imprimir();
  einstein.imprimir();
  newton.imprimir();
  std::cout << '\n';
}

void Principal::imprimeUniversidades() {
  UTFPR.imprimir();
  cambridge.imprimir();
  princeton.imprimir();
  std::cout << '\n';
}

void Principal::imprimeDepartamentos() {
  DAINF.imprimir();
  fisicaPrinceton.imprimir();
  matematicaCambridge.imprimir();
  std::cout << '\n';
}

void Principal::imprimeDisciplinas() {
  tecProg.imprimir();
  fundProg1.imprimir();
  intrLog.imprimir();
  std::cout << '\n';
}

void Principal::imprimeAlunos() {
  thiago.imprimir();
  franco.imprimir();
  lucas.imprimir();
  std::cout << '\n';
}
