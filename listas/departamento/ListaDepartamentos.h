#ifndef LISTADEPARTAMENTO_H
#define LISTADEPARTAMENTO_H

class Departamento;
#include "ElementoListaDepartamento.h"

class ListaDepartamentos {
  private:
    ElementoListaDepartamento* inicio;
    ElementoListaDepartamento* fim;
    ElementoListaDepartamento* atual;
    unsigned int tamanho;
  public:
    
    ListaDepartamentos();
    ~ListaDepartamentos();

    unsigned int getTamanho();

    Departamento* irInicio();
    Departamento* avancar();
    Departamento* voltar();
    Departamento* irFim();
    Departamento* irIndice(unsigned int indice);

    bool noInicio();
    bool noFim();

    void adicionarElementoInicio(Departamento* nova);
    void adicionarElementoFim(Departamento* nova);
    bool adicionarElementoIndice(Departamento* nova, unsigned int indice);


    Departamento* removerElementoInicio();
    Departamento* removerElementoFim();
    Departamento* removerElementoIndice(unsigned int indice);
    
    Departamento* getAtual();
    
  private:
    void adicionarPrimeiroElemento(Departamento* nova);
  

};

#endif