#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"

class Professor : public Pessoa {
private:
  Universidade* universidade;
  Departamento* departamento;
public:
  ~Professor();
  Professor();
  Professor(int diaNascimento, int mesNascimento, int anoNascimento, std::string nomePessoa, Universidade* uni, Departamento* dep);
  void inicializar(int diaNascimento, int mesNascimento, int anoNascimento, std::string nomePessoa, Universidade* uni, Departamento* dep);
  void imprimePessoa() override;
};

#endif
