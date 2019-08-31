#ifndef ELEMENTOLISTAUNIVERSIDADE_H
#define ELEMENTOLISTAUNIVERSIDADE_H

class Universidade;

class ListaUniversidades;

class ElementoListaUniversidade {

  friend ListaUniversidades;
 
  private:
    Universidade *el;
    ElementoListaUniversidade  *antes;
    ElementoListaUniversidade *depois;


  public:
  
    ElementoListaUniversidade();
    ElementoListaUniversidade(Universidade* El, ElementoListaUniversidade* a, ElementoListaUniversidade* d);
    ~ElementoListaUniversidade();

    
};

#endif