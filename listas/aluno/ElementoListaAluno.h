#ifndef ELEMENTOLISTAALUNO_H
#define ELEMENTOLISTAALUNO_H

class Aluno;

class ListaAlunos;

class ElementoListaAluno {

  friend ListaAlunos;
 
  private:
    Aluno *el;
    ElementoListaAluno  *antes;
    ElementoListaAluno *depois;


  public:
  
    ElementoListaAluno();
    ElementoListaAluno(Aluno* El, ElementoListaAluno* a, ElementoListaAluno* d);
    ~ElementoListaAluno();

    
};

#endif