#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H


class Universidade;
#include "../utils/String.h"
#include "../listas/disciplina/ListaDisciplinas.h"
#include "../listas/aluno/ListaAlunos.h"
#include "Disciplina.h"
#include "../Pessoas/Aluno.h"

class Departamento {
  private:
    int id;
    String nome;
    Universidade* universidade;
    ListaDisciplinas disciplinas;
    ListaAlunos alunos;
  public:
  Departamento();
  Departamento(int ID, String Nome, Universidade* uni);
  ~Departamento();
  void setNome(String novoNome);
  String getNome();
  void setUniversidade(Universidade* uni);

  void adicionarDisciplina(Disciplina* disciplina);
  Disciplina* removerDisciplina(int ID);
  void imprimir();
};

#endif
