#include "Professor.h"

#include <iostream>

Professor::~Professor() {

}
Professor::Professor() : Pessoa() {

}

Professor::Professor(int ID, Data Nascimento, String nomePessoa,
                     Universidade* uni, Departamento* dep,
                     float Salario, float BolsaProjeto) :
  Pessoa(ID, Nascimento, nomePessoa), universidade{uni}, departamento{dep},
  salario{Salario}, bolsaProjeto{BolsaProjeto} {

}

void Professor::imprimir() const {
  std::cout << "O professor " << nome << " tem " << idade << " anos, nasceu em "
   << nascimento.paraTexto() << " e trabalha em " << universidade->getNome() <<
    " no departamento " << departamento->getNome() << std::endl;
}
