#ifndef PESSOA_H
#define PESSOA_H

#include<iostream>

class Pessoa {
private:
  int dia;
  int mes;
  int ano;
  int idade;

public:
  Pessoa(int diaNascimento, int mesNascimento, int anoNascimento);
  void calculaIdade(int diaAtual, int mesAtual, int anoAtual);
  int informaIdade();
};


#endif
