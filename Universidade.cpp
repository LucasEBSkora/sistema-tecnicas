#include "Universidade.h"
#include <iostream>

Universidade::Universidade(std::string Nome) : nome{Nome} {

}

Universidade::Universidade() {

}

Universidade::~Universidade() {}
void Universidade::setNome(std::string Nome) {
  nome = Nome;

}
std::string Universidade::getNome() {return nome;}

void Universidade::adicionaDepartamento(Departamento* dept) {
  departamentos.push_back(dept);
  dept->setUniversidade(this);
}

void Universidade::imprime() {
  std::cout << "A universidade " << nome << "tem os seguintes departamentos:\n";

  for(Departamento *d : departamentos) {
    std::cout << '\t' << d->getNome() << '\n';
  }

  std::cout.flush();

}
