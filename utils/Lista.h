#ifndef LISTA_H
#define LISTA_H

#include "ElementoLista.h"

template<typename TIPO>
class Lista {
  private:

    ElementoLista<TIPO>* inicio;
    ElementoLista<TIPO>* fim;
    ElementoLista<TIPO>* atual;
    unsigned int tamanho;

  public:

    Lista();
    ~Lista();

    unsigned int getTamanho();

    TIPO irInicio();
    TIPO avancar();
    TIPO voltar();
    TIPO irFim();
    TIPO irIndice(unsigned int indice);

    bool noInicio();
    bool noFim();

    void adicionarElementoInicio(TIPO nova);
    void adicionarElementoFim(TIPO nova);
    bool adicionarElementoIndice(TIPO nova, unsigned int indice);


    TIPO removerElementoInicio();
    TIPO removerElementoFim();
    TIPO removerElementoIndice(unsigned int indice);
    TIPO removerAtual();

    TIPO getAtual();

  private:
    void adicionarPrimeiroElemento(TIPO nova);

};

#include "Lista.tpp"

#endif
