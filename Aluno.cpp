#include "Aluno.h"

  Aluno::Aluno() : Pessoa() {

  }
  Aluno::~Aluno();
  Aluno::Aluno(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa, unsigned int ra);

  void Aluno::setRA(unsigned int ra) {
    RA = ra;

  }
  unsigned int Aluno::getRA() {
    return ra;
  }