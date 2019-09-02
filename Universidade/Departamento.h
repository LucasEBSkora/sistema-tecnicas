#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H


class Universidade;
#include <string>
#include "../listas/disciplina/ListaDisciplinas.h"
#include "../listas/aluno/ListaAlunos.h"
#include "Disciplina.h"
#include "../Pessoas/Aluno.h"

class Departamento {
  private:
    int id;
    std::string nome;
    Universidade* universidade;
    ListaDisciplinas disciplinas;
    ListaAlunos alunos;
  public:
  Departamento();
  Departamento(int ID, std::string Nome, Universidade* uni);
  ~Departamento();
  void setNome(std::string novoNome);
  std::string getNome();
  void setUniversidade(Universidade* uni);

  void adicionarDisciplina(Disciplina* disciplina);
  Disciplina* removerDisciplina(int ID);
  void imprimir();
};

#endif
