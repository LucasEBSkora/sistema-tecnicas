#ifndef ELEMENTOLISTADEPARTAMENTO_H
#define ELEMENTOLISTADEPARTAMENTO_H

class Departamento;

class ListaDepartamentos;

class ElementoListaDepartamento {

  friend ListaDepartamentos;
 
  private:
    Departamento *el;
    ElementoListaDepartamento  *antes;
    ElementoListaDepartamento *depois;


  public:
  
    ElementoListaDepartamento();
    ElementoListaDepartamento(Departamento* El, ElementoListaDepartamento* a, ElementoListaDepartamento* d);
    ~ElementoListaDepartamento();

    
};

#endif