#ifndef ELEMENTOLISTAUNIVERSIDADE_H
#define ELEMENTOLISTAUNIVERSIDADE_H

#include "../Universidade/Universidade.h"

class ListaUniversidades;

class ElementoListaUniversidade {

  friend ListaUniversidades;
  //pq n funciona??

  private:
    Universidade *universidade;
    ElementoListaUniversidade  *antes;
    ElementoListaUniversidade *depois;


  public:
  
    ElementoListaUniversidade();
    ElementoListaUniversidade(Universidade* uni, ElementoListaUniversidade* a, ElementoListaUniversidade* d);
    ~ElementoListaUniversidade();

    
};

#endif