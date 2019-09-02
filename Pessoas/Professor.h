#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"
#include "../Universidade/Universidade.h"
#include "../Universidade/Departamento.h"
#include "../utils/Data.h"

class Professor : public Pessoa {
private:
  Universidade* universidade;
  Departamento* departamento;
public:
  ~Professor();
  Professor();
  Professor(int ID, Data Nascimento, std::string nomePessoa, Universidade* uni, Departamento* dep);
  void imprimir() override;
};

#endif
