#ifndef ELEMENTOLISTADISCIPLINA_H
#define ELEMENTOLISTADISCIPLINA_H

class Disciplina;

class ListaDisciplinas;

class ElementoListaDisciplina {

  friend ListaDisciplinas;
 
  private:
    Disciplina *el;
    ElementoListaDisciplina  *antes;
    ElementoListaDisciplina *depois;


  public:
  
    ElementoListaDisciplina();
    ElementoListaDisciplina(Disciplina* El, ElementoListaDisciplina* a, ElementoListaDisciplina* d);
    ~ElementoListaDisciplina();

    
};

#endif