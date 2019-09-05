#ifndef PESSOA_H
#define PESSOA_H

#include "../utils/String.h"
#include "../utils/Data.h"

class Pessoa {
protected:
  int id;
  Data nascimento;
  int idade;
  String nome;
public:
  Pessoa();
  ~Pessoa();
  Pessoa(int ID, Data Nascimento, String nomePessoa);
  void calculaIdade(Data atual);
  virtual void imprimir() const;
  int getID() const;
  void setID(int ID);
};

#endif
