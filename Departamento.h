#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

class Universidade;
#include <string.h>

class Departamento {
  private:
    char nome[30];
    Universidade* universidade;
  public:
  Departamento(const char* nome = "", Universidade* uni = NULL) : universidade{uni} {
    strcpy(this->nome, nome);
  };
  ~Departamento() {};
  char* informaNome() {return nome;}

};

#endif
