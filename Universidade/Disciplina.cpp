#include "Disciplina.h"

Disciplina::Disciplina() :
  id{-1}, nome{""}, areaDoConhecimento{""} {

}
Disciplina::~Disciplina() {

}
Disciplina::Disciplina(int ID, std::string Nome, std::string AreaDoConhecimento) :
  id{ID}, nome{Nome}, areaDoConhecimento{AreaDoConhecimento} {

}