#ifndef DATA_H
#define DATA_H

#include "String.h"

class Data {

  public:
    int dia;
    int mes;
    int ano;
    Data();
    ~Data();
    Data(int Dia, int Mes, int Ano);
    String paraTexto();
    static Data atual();
};

#endif
