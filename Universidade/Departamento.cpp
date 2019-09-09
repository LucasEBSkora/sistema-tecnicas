#include "Departamento.h"

#include <iostream>
  Departamento::Departamento() : nome{""}, universidade{nullptr} {

  }

  Departamento::Departamento(int ID, String Nome, Universidade* uni)
    : id{ID}, nome{Nome}, universidade{uni} {

  }

  Departamento::~Departamento() {

  }

  void Departamento::setNome(String novoNome) {
    nome = novoNome;
  }

  String Departamento::getNome() const {
    return nome;
  }

  void Departamento::setUniversidade(Universidade* uni) {
    universidade = uni;
  }

void Departamento::adicionarDisciplina(Disciplina *disciplina) {
  disciplinas.adicionarElementoFim(disciplina);
}

Disciplina* Departamento::removerDisciplina(int ID) {

  Disciplina* ptr = nullptr;

  if(disciplinas.getTamanho() == 0) ptr = nullptr;
  //coloca o iterador no início e já verifica se é o elemento que deve ser eliminado
  else if (disciplinas.irInicio()->getID()) {
    ptr = disciplinas.removerElementoInicio();

  } else {
    while (!disciplinas.noFim()) {

      if (disciplinas.avancar()->getID() == ID) ptr = disciplinas.removerAtual();
    }

  }

  return ptr;
}

void Departamento::imprimir() {
  std::cout << "O departamento " << nome << " tem os seguintes alunos matriculados:\n";

  if (alunos.getTamanho() != 0) {
    Aluno* al = alunos.irInicio();

    while (!alunos.noFim()) {

      std::cout << '\t' << al->getNome() << '\n';
      al = alunos.avancar();
    }
  }

  std::cout << "E as seguintes disciplinas:\n";

  if (disciplinas.getTamanho() != 0) {
    Disciplina* dis = disciplinas.irInicio();

    while (dis != nullptr) {
      std::cout << '\t' << dis->getNome() << '\n';
      dis = disciplinas.avancar();
    }
  }

  std::cout.flush();

}
