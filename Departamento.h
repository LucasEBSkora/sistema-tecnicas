#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

class Universidade;
#include <string.h>

class Departamento {
  private:
    std::string nome;
    Universidade* universidade;
  public:
  Departamento(const char* nome = "", Universidade* uni = NULL) : nome{nome}, universidade{uni} {
  
  };
  ~Departamento() {};
  void setNome(std::string novoNome) {nome = novoNome;}
  std::string getNome() {return nome;}

};

#endif
