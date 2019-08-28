#include "Aluno.h"

  Aluno::Aluno() : Pessoa() {

  }
  Aluno::~Aluno() {

  }
  Aluno::Aluno(int ID, Data Nascimento, std::string nomePessoa, unsigned int ra) 
    : Pessoa(ID, Nascimento, nomePessoa), RA{ra} {

  }

  void Aluno::setRA(unsigned int ra) {
    RA = ra;

  }
  unsigned int Aluno::getRA() {
    return RA;
  }