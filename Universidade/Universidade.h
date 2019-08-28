#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H

#include "Departamento.h"
#include <string>
#include <vector>

class Universidade {
private:
  int id;
  std::string nome;
  std::vector<Departamento*> departamentos;

public:
  Universidade(int ID, std::string Nome);
  Universidade();
  ~Universidade();
  void setNome(std::string Nome);
  std::string getNome();
  void adicionaDepartamento(Departamento* dept);
  void imprime();


};



#endif
