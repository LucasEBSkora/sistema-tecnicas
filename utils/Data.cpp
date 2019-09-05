#include "Data.h"

#include <time.h>
#include <string.h>

Data::Data() : dia{0}, mes{0}, ano{0} {

}


//TODO: deixar essa classe segura (calcular a data correta se valores "errados" forem dados)
Data::Data(int Dia, int Mes, int Ano) : dia{Dia}, mes{Mes}, ano{Ano}{

}

Data::~Data() {

}
String Data::paraTexto() const{

  char str[11];
  sprintf(str, "%02d/%02d/%04d", dia, mes, ano);
  return str;
 return String(str);

}

Data Data::atual() {

  time_t rawTime;
  struct tm *local;

  time(&rawTime);
  local = gmtime(&rawTime);

  int diaHoje = local->tm_mday;
  int mesHoje = local->tm_mon + 1;
  int anoHoje = local->tm_year + 1900;

  return Data(diaHoje, mesHoje, anoHoje);
}
