#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H

#include "Departamento.h"
#include "../listas/departamento/ListaDepartamentos.h"
#include "../utils/String.h"


class Universidade {
private:
  int id;
  String nome;
  ListaDepartamentos departamentos;

public:
  Universidade(int ID, String Nome);
  Universidade();
  ~Universidade();

  void setNome(String Nome);
  String getNome();

  void imprimir();

  void adicionarDepartamento(Departamento* dept);
  Departamento* removerDepartamento(int ID);


};



#endif
