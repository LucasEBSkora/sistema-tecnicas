#include "pessoa.h"

using namespace std;

Pessoa::~Pessoa() {
  
}

Pessoa::Pessoa(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa) {
  
  inicializar(diaNascimento, mesNascimento, anoNascimento, nomePessoa);

}

Pessoa::Pessoa() {
  inicializar(0,0,0, "");
}

void Pessoa::inicializar(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa) {
  dia = diaNascimento;
  mes = mesNascimento;
  ano = anoNascimento;
  strcpy(nome, nomePessoa);
  idade = -1;
}


int Pessoa::informaIdade() {
  return idade;
} 

void Pessoa::imprimeIdade() {
    cout << "a idade de " << nome << " seria " <<  idade << endl;
}

void Pessoa::calculaIdade(int diaAtual, int mesAtual, int anoAtual) {

  idade = anoAtual - ano;

  if (mes > mesAtual) --idade;
  else if (mes == mesAtual && dia > diaAtual) --idade;
  
}