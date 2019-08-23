#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include "Professor.h"
#include "Departamento.h"
#include "Universidade.h"

class Principal {

private:
  Professor simao;
  Professor newton;
  Professor einstein;

  Universidade princeton;
  Universidade cambridge;
  Universidade UTFPR;

  Departamento DAINF;
  Departamento fisicaPrinceton;
  Departamento matematicaCambridge;


  int diaHoje;
  int mesHoje;
  int anoHoje;

public:
  Principal();
  int executar();
  ~Principal();

private:
  void descobreData();

};


#endif
