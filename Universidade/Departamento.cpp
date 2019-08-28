#include "Departamento.h"

  Departamento::Departamento() : nome{""}, universidade{NULL} {

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

  void Departamento::setUniversidade(Universidade* uni) {
    universidade = uni;
  }
