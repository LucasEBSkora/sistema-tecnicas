#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include "pessoa.h"
#include <time.h>
class Principal {

private:
  Pessoa newton;
  Pessoa einstein;

  int diaHoje;
  int mesHoje;
  int anoHoje;

public:
  Principal();
  int executar();
  ~Principal();

};


#endif 