#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"

class Aluno : public Pessoa {
private:
  unsigned int RA;

public:
  Aluno();
  ~Aluno();
  Aluno(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa, unsigned int ra);

  void setRA(unsigned int ra);
  unsigned int getRA();

};

#endif
