#include "ElementoListaUniversidade.h"

ElementoListaUniversidade::ElementoListaUniversidade() {

}

ElementoListaUniversidade::ElementoListaUniversidade(Universidade* uni= NULL, ElementoListaUniversidade* a = NULL, ElementoListaUniversidade* d = NULL) :
  universidade{uni}, antes{a}, depois{d} {

}

ElementoListaUniversidade::~ElementoListaUniversidade() {

}