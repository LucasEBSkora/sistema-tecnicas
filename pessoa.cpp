#include "pessoa.h"

using namespace std;

Pessoa::~Pessoa() {
  
}

Pessoa::Pessoa(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa, Universidade* universidadeTrabalho) {
  
  inicializar(diaNascimento, mesNascimento, anoNascimento, nomePessoa, universidadeTrabalho);

}

Pessoa::Pessoa() {
  inicializar(0,0,0, "", NULL);
}

void Pessoa::inicializar(int diaNascimento, int mesNascimento, int anoNascimento, const char* nomePessoa, Universidade* universidadeTrabalho) {
  dia = diaNascimento;
  mes = mesNascimento;
  ano = anoNascimento;
  strcpy(nome, nomePessoa);
  idade = -1;
  universidade = universidadeTrabalho;
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

void Pessoa::imprimeUniversidade() {
  cout << nome << " trabalha em " << universidade->informarNome() << endl;
}