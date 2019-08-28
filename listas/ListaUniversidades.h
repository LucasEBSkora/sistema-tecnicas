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

    unsigned int getTamanho();

    Universidade* irInicio();
    Universidade* avancar();
    Universidade* voltar();
    Universidade* irFim();
    Universidade* irIndice(unsigned int indice);

    bool noInicio();
    bool noFim();

    void adicionarElementoInicio(Universidade* nova);
    void adicionarElementoFim(Universidade* nova);
    bool adicionarElementoIndice(Universidade* nova, unsigned int indice);


    Universidade* removerElementoInicio();
    Universidade* removerElementoFim();
    Universidade* removerElementoIndice(unsigned int indice);
    
    Universidade* getAtual();
    
  private:
    void adicionarPrimeiroElemento(Universidade* nova);
  

};

#endif