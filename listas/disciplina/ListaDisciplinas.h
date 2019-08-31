#ifndef LISTADISCIPLINAS_H
#define LISTADISCIPLINAS_H

class Disciplina;
#include "ElementoListaDisciplina.h"

class ListaDisciplinas {
  private:
    ElementoListaDisciplina* inicio;
    ElementoListaDisciplina* fim;
    ElementoListaDisciplina* atual;
    unsigned int tamanho;
  public:
    
    ListaDisciplinas();
    ~ListaDisciplinas();

    unsigned int getTamanho();

    Disciplina* irInicio();
    Disciplina* avancar();
    Disciplina* voltar();
    Disciplina* irFim();
    Disciplina* irIndice(unsigned int indice);

    bool noInicio();
    bool noFim();

    void adicionarElementoInicio(Disciplina* nova);
    void adicionarElementoFim(Disciplina* nova);
    bool adicionarElementoIndice(Disciplina* nova, unsigned int indice);


    Disciplina* removerElementoInicio();
    Disciplina* removerElementoFim();
    Disciplina* removerElementoIndice(unsigned int indice);
    Disciplina* removerDisciplinaAtual();
    
    Disciplina* getAtual();
    
  private:
    void adicionarPrimeiroElemento(Disciplina* nova);
  

};

#endif