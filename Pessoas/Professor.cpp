#include "Professor.h"

#include <iostream>

  Professor::~Professor() {

  }
  Professor::Professor() : Pessoa() {

  }

  Professor::Professor(int ID, Data Nascimento, std::string nomePessoa, Universidade* uni, Departamento* dep) :
    Pessoa(ID, Nascimento, nomePessoa), universidade{uni}, departamento{dep} {

  }

void Professor::imprimir() {
  std::cout << "O professor " << nome << " tem " << idade << " anos, nasceu em " << nascimento.paraTexto() <<
  " e trabalha em " << universidade->getNome() << " no departamento " << departamento->getNome() << std::endl;
}
