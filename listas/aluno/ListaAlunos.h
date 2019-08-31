#ifndef LISTAALUNOS_H
#define LISTAALUNOS_H

class Aluno;
#include "ElementoListaAluno.h"

class ListaAlunos {
  private:
    ElementoListaAluno* inicio;
    ElementoListaAluno* fim;
    ElementoListaAluno* atual;
    unsigned int tamanho;
  public:
    
    ListaAlunos();
    ~ListaAlunos();

    unsigned int getTamanho();

    Aluno* irInicio();
    Aluno* avancar();
    Aluno* voltar();
    Aluno* irFim();
    Aluno* irIndice(unsigned int indice);

    bool noInicio();
    bool noFim();

    void adicionarElementoInicio(Aluno* nova);
    void adicionarElementoFim(Aluno* nova);
    bool adicionarElementoIndice(Aluno* nova, unsigned int indice);


    Aluno* removerElementoInicio();
    Aluno* removerElementoFim();
    Aluno* removerElementoIndice(unsigned int indice);
    Aluno* removerAlunoAtual();
    
    Aluno* getAtual();
    
  private:
    void adicionarPrimeiroElemento(Aluno* nova);
  

};

#endif