#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"
#include "../Universidade/Universidade.h"
#include "../Universidade/Departamento.h"
#include "../utils/Data.h"
#include "../utils/String.h"

class Professor : public Pessoa {
private:
  Universidade* universidade;
  Departamento* departamento;
  float salario;
  float bolsaProjeto;
public:
  ~Professor();
  Professor();
  Professor(int ID, Data Nascimento, String nomePessoa, Universidade* uni,
            Departamento* dep, float Salario = 0.0, float BolsaProjeto = 0.0);
  virtual void imprimir() const override;
};

#endif
