#include "Pessoa.h"

#include <iostream>

Pessoa::~Pessoa() {

}

Pessoa::Pessoa(int diaNascimento = 0, int mesNascimento = 0, int anoNascimento = 0, std::string nomePessoa = "") : 
dia{diaNascimento}, mes{mesNascimento}, ano{anoNascimento}, idade{-1}, nome{nomePessoa} {

  

}

Pessoa::Pessoa() {
  
}


void Pessoa::calculaIdade(int diaAtual, int mesAtual, int anoAtual) {

  idade = anoAtual - ano;

  if (mes > mesAtual) --idade;
  else if (mes == mesAtual && dia > diaAtual) --idade;

}

void Pessoa::imprimePessoa() {
  std::cout << nome << "tem " << idade << "anos, nasceu em " << dia << "\\" << mes << "\\" << ano << std::endl;
}