#include "ElementoListaDisciplina.h"

ElementoListaDisciplina::ElementoListaDisciplina() {

}

ElementoListaDisciplina::ElementoListaDisciplina(Disciplina* El = nullptr, ElementoListaDisciplina* a = nullptr, ElementoListaDisciplina* d = nullptr) :
  el{El}, antes{a}, depois{d} {

}

ElementoListaDisciplina::~ElementoListaDisciplina() {

}