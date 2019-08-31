#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H

#include "Departamento.h"
#include "../listas/departamento/ListaDepartamentos.h"
#include <string>


class Universidade {
private:
  int id;
  std::string nome;
  ListaDepartamentos departamentos;

public:
  Universidade(int ID, std::string Nome);
  Universidade();
  ~Universidade();

  void setNome(std::string Nome);
  std::string getNome();
  
  void imprime();
  
  void adicionaDepartamento(Departamento* dept);
  Departamento* removeDepartamento(int ID);


};



#endif
