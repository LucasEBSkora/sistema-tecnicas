#include "Pessoa.h"

#include <iostream>

Pessoa::~Pessoa() {

}

Pessoa::Pessoa(int ID, Data Nascimento, String nomePessoa = String()) :
  id{ID}, nascimento{Nascimento}, idade{-1}, nome{nomePessoa} {

}

Pessoa::Pessoa() {

}


//TODO: implementar operador de subtração para datas
void Pessoa::calculaIdade(Data atual) {

  idade = atual.ano - nascimento.ano;

  if (nascimento.mes > atual.mes) --idade;
  else if (nascimento.mes == atual.mes && nascimento.dia > atual.dia) --idade;
}

void Pessoa::imprimir() const {
  std::cout << nome << " tem " << idade << "anos, nasceu em " << nascimento.paraTexto() << std::endl;
}

int Pessoa::getID() const {
  return id;
}

void Pessoa::setID(int ID) {
  id = ID;
}
