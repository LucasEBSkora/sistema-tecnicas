#ifndef ELEMENTO_H
#define ELEMENTO_H


template<typename TIPO>
class ElementoLista {
  public:
    TIPO el;
    ElementoLista<TIPO>  *antes;
    ElementoLista<TIPO> *depois;

    ElementoLista() {

    }
    ElementoLista(TIPO El, ElementoLista<TIPO>* a, ElementoLista<TIPO>* d) :
    el{El}, antes{a}, depois{d} {

    }

    ~ElementoLista() {

    }

};

#endif
