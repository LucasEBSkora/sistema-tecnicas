#include "Professor.h"

#include <iostream>

  Professor::~Professor() {

  }
  Professor::Professor() : Pessoa() {

  }
  
  Professor::Professor(int diaNascimento, int mesNascimento, int anoNascimento, std::string nomePessoa, Universidade* uni, Departamento* dep) :
    Pessoa(diaNascimento, mesNascimento, anoNascimento, nomePessoa), universidade{uni}, departamento{dep} {

  }

void Professor::Professor::imprimePessoa() {
  std::cout << nome << "tem " << idade << "anos, nasceu em " << dia << "\\" << mes << "\\" << ano << 
  "e trabalha em " << universidade->getNome() << "no departamento " << departamento->getNome() << std::endl;
}
