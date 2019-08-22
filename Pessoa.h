#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa {
protected:
  int dia;
  int mes;
  int ano;
  int idade;
  std::string nome;

public:
  Pessoa();
  ~Pessoa();
  Pessoa(int diaNascimento, int mesNascimento, int anoNascimento, std::string nomePessoa);
  void calculaIdade(int diaAtual, int mesAtual, int anoAtual);
  virtual void imprimePessoa();
  
};

#endif
