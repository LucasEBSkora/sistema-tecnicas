#include "Aluno.h"

  Aluno::Aluno() : Pessoa() {

  }
  Aluno::~Aluno() {

  }
  Aluno::Aluno(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa, unsigned int ra) 
    : Pessoa(diaNascimento, mesNascimento, anoNascimento, nomePessoa), RA{ra} {

  }

  void Aluno::setRA(unsigned int ra) {
    RA = ra;

  }
  unsigned int Aluno::getRA() {
    return RA;
  }