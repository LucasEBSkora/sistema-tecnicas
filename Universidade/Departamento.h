#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H


class Universidade;
#include "../utils/String.h"
#include "../utils/Lista.h"
#include "Disciplina.h"
#include "../Pessoas/Aluno.h"

class Departamento {
  private:
    int id;
    String nome;
    Universidade* universidade;
    Lista<Disciplina*> disciplinas;
    Lista<Aluno*> alunos;
  public:
  Departamento();
  Departamento(int ID, String Nome, Universidade* uni);
  ~Departamento();
  void setNome(String novoNome);
  String getNome() const;
  void setUniversidade(Universidade* uni);

  void adicionarDisciplina(Disciplina* disciplina);
  Disciplina* removerDisciplina(int ID);
  void imprimir();
};

#endif
