#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H


class Universidade;
#include <string>


class Departamento {
  private:
    std::string nome;
    Universidade* universidade;
  public:
  Departamento() {}
  Departamento(std::string Nome, Universidade* uni) : nome{nome}, universidade{uni} {
  
  };
  ~Departamento() {};
  void setNome(std::string novoNome) {nome = novoNome;}
  std::string getNome() {return nome;}

};

#endif
