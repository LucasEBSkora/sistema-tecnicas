#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H

#include <string.h>


class Universidade {
private:
  char nome[30];
public:
  Universidade(const char* Nome = "");
  ~Universidade();
  void atualizarNome(const char* Nome);
  char* informarNome();


};



#endif