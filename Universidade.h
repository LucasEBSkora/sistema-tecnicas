#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H

#include "Departamento.h"
#include <string>
#include <vector>

class Universidade {
private:
  std::string nome;
  std::vector<Departamento*> departamentos;

public:
  Universidade(std::string Nome = "");
  ~Universidade();
  void setNome(std::string Nome);
  std::string informarNome();


};



#endif
