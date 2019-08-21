#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"

class Professor : public Pessoa {
private:
  Universidade* universidade;
  Departamento* departamento;
public:
  ~Professor();
  Professor();
  Professor(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa, Universidade* uni, Departamento* dep);
  void inicializar(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa, Universidade* uni, Departamento* dep);
  void imprimePessoa() override;
};

#endif
