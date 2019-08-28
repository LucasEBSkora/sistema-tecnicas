#include "Data.h"

#include <string.h>

Data::Data() : dia{0}, mes{0}, ano{0} {
  
}


//TODO: deixar essa classe segura (calcular a data correta se valores "errados" forem dados)
Data::Data(int Dia, int Mes, int Ano) : dia{Dia}, mes{Mes}, ano{Ano}{

}

Data::~Data() {

}
std::string Data::paraTexto() {
  char data[11];
  sprintf(data, "%02d/%02d/%04d", dia, mes, ano);
  return data;
  
}