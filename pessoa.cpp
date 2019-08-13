#include "pessoa.h"

using namespace std;

void Pessoa::calculaIdade(int diaAtual, int mesAtual, int anoAtual) {

  idade = anoAtual - ano;

  if (mes > mesAtual) --idade;
  else if (mes == mesAtual && dia > diaAtual) --idade;

  
}

Pessoa::Pessoa(int diaNascimento, int mesNascimento, int anoNascimento) : 
  dia{diaNascimento}, mes {mesNascimento}, ano{anoNascimento} {

}

int Pessoa::informaIdade() {
  return idade;
} 

