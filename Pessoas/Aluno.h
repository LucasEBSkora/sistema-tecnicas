#ifndef ALUNO_H
#define ALUNO_H

#include "Pessoa.h"
#include "../utils/Data.h"

class Aluno : public Pessoa {
  private:
    unsigned int RA;

  public:
    Aluno();
    ~Aluno();
    Aluno(int ID, Data Nascimento, std::string nomePessoa, unsigned int ra);

    void setRA(unsigned int ra);
    unsigned int getRA();
    void imprimir() override;

};

#endif
