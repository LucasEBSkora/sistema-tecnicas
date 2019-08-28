#include "Universidade.h"


  Universidade::Universidade(int ID, std::string Nome) : id{ID}, nome{Nome} {

  }

  Universidade::Universidade() {

  }
  
  Universidade::~Universidade() {}
  void Universidade::setNome(std::string Nome) {
    nome = Nome;

  }
  std::string Universidade::getNome() {return nome;}
