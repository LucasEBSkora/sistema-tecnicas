#ifndef DATA_H
#define DATA_H

#include <string>

class Data {

  public:
    int dia;
    int mes;
    int ano;
    Data();
    ~Data();
    Data(int Dia, int Mes, int Ano);
    std::string paraTexto();
    static Data atual();
};

#endif
