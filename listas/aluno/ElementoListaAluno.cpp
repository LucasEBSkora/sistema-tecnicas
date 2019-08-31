#include "ElementoListaAluno.h"

ElementoListaAluno::ElementoListaAluno() {

}

ElementoListaAluno::ElementoListaAluno(Aluno* El = nullptr, ElementoListaAluno* a = nullptr, ElementoListaAluno* d = nullptr) :
  el{El}, antes{a}, depois{d} {

}

ElementoListaAluno::~ElementoListaAluno() {

}