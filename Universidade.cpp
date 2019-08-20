#include "Universidade.h"

#include <string.h>

  Universidade::Universidade(const char* Nome) {
    strcpy(nome, Nome);
  }
  Universidade::~Universidade() {}
  void Universidade::atualizarNome(const char* Nome) {
    strcpy(nome, Nome);
  }
  char* Universidade::informarNome() {return nome;}
