#include "Universidade.h"
#include <iostream>


Universidade::Universidade(int ID, String Nome) : id{ID}, nome{Nome} {

}

Universidade::Universidade() {

}

Universidade::~Universidade() {

}

void Universidade::setNome(String Nome) {
  nome = Nome;

}

String Universidade::getNome() const {return nome;}

void Universidade::adicionarDepartamento(Departamento* dept) {
  departamentos.adicionarElementoFim(dept);
  dept->setUniversidade(this);
}

void Universidade::imprimir() {
  std::cout << "A universidade " << nome << " tem os seguintes departamentos:\n";

  if (departamentos.getTamanho() != 0) {

    Departamento* dep = departamentos.irInicio();

    while (dep != nullptr) {

      std::cout << '\t' << dep->getNome() << '\n';
      dep = departamentos.avancar();
    }

  }

  std::cout.flush();

}
