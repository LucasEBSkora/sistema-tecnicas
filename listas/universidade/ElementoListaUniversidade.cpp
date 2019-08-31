#include "ElementoListaUniversidade.h"

ElementoListaUniversidade::ElementoListaUniversidade() {

}

ElementoListaUniversidade::ElementoListaUniversidade(Universidade* El = nullptr, ElementoListaUniversidade* a = nullptr, ElementoListaUniversidade* d = nullptr) :
  el{El}, antes{a}, depois{d} {

}

ElementoListaUniversidade::~ElementoListaUniversidade() {

}