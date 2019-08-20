#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "pessoa.h"

class Professor : public Pessoa {
private:
  Universidade* universidade;
  Departamento* departamento
public:
  ~Professor();
  Professor();
  Professor(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa, Universidade* uni, Departamento* dep);
  void inicializar(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa, Universidade* uni, Departamento* dep);
  void imprimeUniversidade();

}

#endif
