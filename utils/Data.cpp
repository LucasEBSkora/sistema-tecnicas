#include "Data.h"

#include <sstream>
#include <iomanip>
#include <time.h>

Data::Data() : dia{0}, mes{0}, ano{0} {

}


//TODO: deixar essa classe segura (calcular a data correta se valores "errados" forem dados)
Data::Data(int Dia, int Mes, int Ano) : dia{Dia}, mes{Mes}, ano{Ano}{

}

Data::~Data() {

}
std::string Data::paraTexto() {
  std::stringstream strs;
  strs << std::setfill('0') << std::setw(2) << dia << std::setw(1) << '/'
  << std::setw(2) << mes << std::setw(1) << '/' << std::setw(4) << ano;
  return strs.str();

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
