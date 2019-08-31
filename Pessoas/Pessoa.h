#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include "../utils/Data.h"

class Pessoa {
protected:
  int id;
  Data nascimento;
  int idade;
  std::string nome;
public:
  Pessoa();
  ~Pessoa();
  Pessoa(int ID, Data Nascimento, std::string nomePessoa);
  void calculaIdade(Data atual);
  virtual void imprimePessoa();
  int getID();
  void setID(int ID);
};

#endif
