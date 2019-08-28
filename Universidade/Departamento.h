#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H


class Universidade;
#include <string>


class Departamento {
  private:
    int id;
    std::string nome;
    Universidade* universidade;
  public:
  Departamento();
  Departamento(int ID, std::string Nome, Universidade* uni);
  ~Departamento();
  void setNome(std::string novoNome);
  std::string getNome();

};

#endif
