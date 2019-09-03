#ifndef ALUNO_H
#define ALUNO_H

#include "../utils/String.h"
#include "../utils/Data.h"
#include "Pessoa.h"

class Aluno : public Pessoa {
  private:
    unsigned int RA;

  public:
    Aluno();
    ~Aluno();
    Aluno(int ID, Data Nascimento, String nomePessoa, unsigned int ra);

    void setRA(unsigned int ra);
    unsigned int getRA();
    void setNome(String Nome);
    String getNome();
    void imprimir() override;

};

#endif
