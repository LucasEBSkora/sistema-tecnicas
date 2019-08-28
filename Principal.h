#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include "Pessoas/Professor.h"
#include "Universidade/Departamento.h"
#include "Universidade/Universidade.h"
#include "utils/Data.h"

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
    
    Data dataAtual;
    
  public:
    Principal();
    ~Principal();
    int executar();

  private:
    void descobreData();

};


#endif
