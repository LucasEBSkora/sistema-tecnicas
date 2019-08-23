#include "Departamento.h"

  Departamento::Departamento() {

  }

  Departamento::Departamento(std::string Nome, Universidade* uni) 
    : nome{nome}, universidade{uni} {
  
  }
  
  Departamento::~Departamento() {

  }
  
  void Departamento::setNome(std::string novoNome) {
    nome = novoNome;
  }

  std::string Departamento::getNome() {
    return nome;
  }