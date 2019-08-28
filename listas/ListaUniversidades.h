#ifndef LISTAUNIVERSIDADES_H
#define LISTAUNIVERSIDADES_H

class Universidade;
#include "ElementoListaUniversidade.h"

class ListaUniversidades {
  private:
    ElementoListaUniversidade* inicio;
    ElementoListaUniversidade* fim;
    ElementoListaUniversidade* atual;
    unsigned int tamanho;
  public:
    ListaUniversidades();
    ~ListaUniversidades();

    Universidade* irInicio();
    Universidade* avancar();
    Universidade* voltar();
    Universidade* irFim();
    Universidade* irIndice(unsigned int indice);

    bool noInicio();
    bool noFim();

    void adicionarElementoInicio(Universidade* nova);
    void adicionarElementoFim(Universidade* nova);
    void adicionarElementoIndice(Universidade* nova, unsigned int indice);

    Universidade* removerElementoInicio();
    Universidade* removerElementoFim();
    Universidade* removerElementoIndice(unsigned int indice);
    
    Universidade* atual();

  

};

#endif