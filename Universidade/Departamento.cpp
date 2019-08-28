#include "Departamento.h"

  Departamento::Departamento() {

  }

  Departamento::Departamento(int ID, std::string Nome, Universidade* uni) 
    : id{ID}, nome{Nome}, universidade{uni} {
  
  }
  
  Departamento::~Departamento() {

  }
  
  void Departamento::setNome(std::string novoNome) {
    nome = novoNome;
  }

  std::string Departamento::getNome() {
    return nome;
  }