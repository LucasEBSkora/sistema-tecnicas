#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"

class Aluno : public Pessoa {
private:
  unsigned int RA;

public:
  Aluno(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa, unsigned int RA);

  Aluno();
  ~Aluno();

  void setRA(unsigned int RA);
  unsigned int getRA();

}

#endif
