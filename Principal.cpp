#include "Principal.h"

#include <iostream>
#include "utils/String.h"

Principal::~Principal() {

}

Principal::Principal() :
  idAtual{0},
  princeton{idAtual++, String("Princeton")},
  cambridge{idAtual++, String("Cambridge")},
  UTFPR{idAtual++, String("UTFPR")},
  DAINF{idAtual++, String("DAINF"), &UTFPR},
  fisicaPrinceton{idAtual++, String("Department of Phisics"), &princeton},
  matematicaCambridge{idAtual++, String("Faculty of Mathematics"), &cambridge},
  simao{idAtual++, Data(3, 10, 1976), String("Simao"), &UTFPR, &DAINF, 4000, 1000},
  newton{idAtual++, Data(4, 1, 1643), String("Newton"), &cambridge, &matematicaCambridge, 25000},
  einstein{idAtual++, Data(14, 3, 1879), String("Einstein"), &princeton, &fisicaPrinceton, 25000},
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
  professores.adicionarElementoFim(&simao);
  professores.adicionarElementoFim(&einstein);
  professores.adicionarElementoFim(&newton);
}

void Principal::inicUniversidades() {
  UTFPR.adicionarDepartamento(&DAINF);
  cambridge.adicionarDepartamento(&matematicaCambridge);
  princeton.adicionarDepartamento(&fisicaPrinceton);
  universidades.adicionarElementoFim(&UTFPR);
  universidades.adicionarElementoFim(&cambridge);
  universidades.adicionarElementoFim(&princeton);
}

void Principal::inicDepartamentos() {
  DAINF.adicionarDisciplina(&tecProg);
  DAINF.adicionarDisciplina(&fundProg1);
  DAINF.adicionarDisciplina(&intrLog);
  departamentos.adicionarElementoFim(&DAINF);
  departamentos.adicionarElementoFim(&matematicaCambridge);
  departamentos.adicionarElementoFim(&fisicaPrinceton);
}

void Principal::inicDisciplinas() {
  intrLog.adicionarAluno(&franco);
  fundProg1.adicionarAluno(&thiago);
  fundProg1.adicionarAluno(&lucas);
  tecProg.adicionarAluno(&franco);
  tecProg.adicionarAluno(&thiago);
  tecProg.adicionarAluno(&lucas);
  disciplinas.adicionarElementoFim(&intrLog);
  disciplinas.adicionarElementoFim(&fundProg1);
  disciplinas.adicionarElementoFim(&tecProg);
}

void Principal::inicAlunos() {
  thiago.calculaIdade(dataAtual);
  franco.calculaIdade(dataAtual);
  lucas.calculaIdade(dataAtual);
  alunos.adicionarElementoFim(&franco);
  alunos.adicionarElementoFim(&thiago);
  alunos.adicionarElementoFim(&lucas);
}

void Principal::imprimeProfessores() {
  if (professores.getTamanho() != 0) {

    Professor* prof = professores.irInicio();

    while (prof != nullptr) {

      prof->imprimir();
      prof = professores.avancar();
    }
  }
  std::cout << '\n';
}

void Principal::imprimeUniversidades() {
  if (universidades.getTamanho() != 0) {

    Universidade* uni = universidades.irInicio();

    while (uni != nullptr) {

      uni->imprimir();
      uni = universidades.avancar();
    }
  }
  std::cout << '\n';
}

void Principal::imprimeDepartamentos() {
  if (departamentos.getTamanho() != 0) {

    Departamento* dep = departamentos.irInicio();

    while (dep != nullptr) {

      dep->imprimir();
      dep = departamentos.avancar();
    }
  }
  std::cout << '\n';
}

void Principal::imprimeDisciplinas() {
  if (disciplinas.getTamanho() != 0) {

    Disciplina* disc = disciplinas.irInicio();

    while (disc != nullptr) {

      disc->imprimir();
      disc = disciplinas.avancar();
    }
  };
  std::cout << '\n';
}

void Principal::imprimeAlunos() {
  if (alunos.getTamanho() != 0) {

    Aluno* aluno = alunos.irInicio();

    while (aluno != nullptr) {

      aluno->imprimir();
      aluno = alunos.avancar();
    }
  }
  std::cout << '\n';
}
