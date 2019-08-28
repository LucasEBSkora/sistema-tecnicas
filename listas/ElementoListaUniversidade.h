#ifndef ELEMENTOLISTAUNIVERSIDADE_H
#define ELEMENTOLISTAUNIVERSIDADE_H

#include "ListaUniversidades.h"
#include "../Universidade/Universidade.h"

class ElementoListaUniversidade {

  friend ListaUniversidades;

  private:

    Universidade *universidade;
    ElementoListaUniversidade  *antes;
    ElementoListaUniversidade *depois;

  public:

    ElementoListaUniversidade(Universidade* uni, ElementoListaUniversidade* a, ElementoListaUniversidade* d);
    ~ElementoListaUniversidade();
    
    
};

#endif