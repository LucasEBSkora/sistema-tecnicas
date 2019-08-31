#include "ElementoListaDepartamento.h"

ElementoListaDepartamento::ElementoListaDepartamento() {

}

ElementoListaDepartamento::ElementoListaDepartamento(Departamento* El = nullptr, ElementoListaDepartamento* a = nullptr, ElementoListaDepartamento* d = nullptr) :
  el{El}, antes{a}, depois{d} {

}

ElementoListaDepartamento::~ElementoListaDepartamento() {

}