#include "Pessoa.h"

using namespace std;

Pessoa::~Pessoa() {

}

Pessoa::Pessoa(int diaNascimento, int mesNascimento, int anoNascimento, std::string nomePessoa) {

  inicializar(diaNascimento, mesNascimento, anoNascimento, nomePessoa);

}

Pessoa::Pessoa() {
  inicializar(0,0,0, "");
}

void Pessoa::inicializar(int diaNascimento, int mesNascimento, int anoNascimento, std::string nomePessoa) {
  dia = diaNascimento;
  mes = mesNascimento;
  ano = anoNascimento;
  nome = nomePessoa;
  idade = -1;
}




void Pessoa::calculaIdade(int diaAtual, int mesAtual, int anoAtual) {

  idade = anoAtual - ano;

  if (mes > mesAtual) --idade;
  else if (mes == mesAtual && dia > diaAtual) --idade;

}
