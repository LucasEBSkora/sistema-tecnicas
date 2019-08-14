#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string.h>
#include "Universidade.h"

class Pessoa {
private:
  int dia;
  int mes;
  int ano;
  int idade;
  char nome[30];
  Universidade* universidade;

public:
  Pessoa();
  ~Pessoa();
  Pessoa(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa, Universidade* universidadeTrabalho);
  void inicializar(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa, Universidade* universidadeTrabalho);
  void calculaIdade(int diaAtual, int mesAtual, int anoAtual);
  void imprimeIdade();
  int informaIdade();
  void imprimeUniversidade();
};


#endif
