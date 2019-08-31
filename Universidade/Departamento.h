#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H


class Universidade;
#include <string>
#include "../listas/disciplina/ListaDisciplinas.h"
#include "Disciplina.h"

class Departamento {
  private:
    int id;
    std::string nome;
    Universidade* universidade;
    ListaDisciplinas disciplinas;
  public:
  Departamento();
  Departamento(int ID, std::string Nome, Universidade* uni);
  ~Departamento();
  void setNome(std::string novoNome);
  std::string getNome();
  void setUniversidade(Universidade* uni);
  void AdicionarDisciplina(Disciplina* disciplina);
  Disciplina* removerDisciplina(int ID);
};

#endif
