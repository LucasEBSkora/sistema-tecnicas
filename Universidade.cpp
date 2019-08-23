#include "Universidade.h"


  Universidade::Universidade(std::string Nome) : nome{Nome} {

  }

  Universidade::Universidade() {

  }
  
  Universidade::~Universidade() {}
  void Universidade::setNome(std::string Nome) {
    nome = Nome;

  }
  std::string Universidade::getNome() {return nome;}
