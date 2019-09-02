#include "Disciplina.h"
#include <iostream>
Disciplina::Disciplina() :
  id{-1}, nome{""}, areaDoConhecimento{""} {

}

Disciplina::~Disciplina() {

}

Disciplina::Disciplina(int ID, std::string Nome, std::string AreaDoConhecimento, unsigned int MaxAlunos) :
  id{ID}, nome{Nome}, areaDoConhecimento{AreaDoConhecimento}, maxAlunos{MaxAlunos} {

}

void Disciplina::adicionarAluno(Aluno *novoAluno) {
  alunos.adicionarElementoFim(novoAluno);
}

void Disciplina::removerAluno(int ID) {

  if(alunos.getTamanho() == 0) return;

  //coloca o iterador no início e já verifica se é o elemento que deve ser eliminado
  if (alunos.irInicio()->getID() == ID) {
    alunos.removerElementoInicio();

  } else {
    while (!alunos.noFim()) {

      if (alunos.avancar()->getID() == ID) alunos.removerAlunoAtual();
    }

  }
}

void Disciplina::setID(int ID) {
  id = ID;
}

int Disciplina::getID() {
  return id;
}

void Disciplina::imprimir() {
  std::cout << "A Disciplina " << nome << "tem os seguintes alunos matriculados:\n";

  if (alunos.getTamanho() != 0) {
    Aluno* al = alunos.irInicio();

    while (!departamentos.noFim()) {

      std::cout << '\t' << al->getNome() << '\n';
      al = alunos.avancar();
    }
  }
  std::cout.flush();

}
