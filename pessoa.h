#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string.h>

class Pessoa {
private:
  int dia;
  int mes;
  int ano;
  int idade;
  char nome[30];

public:
  Pessoa();
  Pessoa(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa);
  void inicializar(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa);
  void calculaIdade(int diaAtual, int mesAtual, int anoAtual);
  void imprimeIdade();
  int informaIdade();
};


#endif
