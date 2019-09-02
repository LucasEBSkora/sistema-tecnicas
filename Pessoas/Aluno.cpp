#include "Aluno.h"
#include <iostream>

Aluno::Aluno() : Pessoa() {

}

Aluno::~Aluno() {

}

Aluno::Aluno(int ID, Data Nascimento, std::string nomePessoa, unsigned int ra)
  : Pessoa(ID, Nascimento, nomePessoa), RA{ra} {

}

void Aluno::setRA(unsigned int ra) {
  RA = ra;

}

unsigned int Aluno::getRA() {
  return RA;
}

void Aluno::setNome(std::string Nome) {
  nome = Nome;
}

std::string Aluno::getNome() {
  return nome;
}

void Aluno::imprimir() {
  std::cout << "O aluno " << nome << " tem " << idade << " anos, nasceu em " << nascimento.paraTexto() <<
  " e seu RA e " << RA << std::endl;
}
