#include "Disciplina.h"

Disciplina::Disciplina() :
  id{-1}, nome{""}, areaDoConhecimento{""} {

}

Disciplina::~Disciplina() {
  
}

Disciplina::Disciplina(int ID, std::string Nome, std::string AreaDoConhecimento) :
  id{ID}, nome{Nome}, areaDoConhecimento{AreaDoConhecimento} {

}

void Disciplina::AdicionarAluno(Aluno *novoAluno) {
  alunos.adicionarElementoFim(novoAluno);
}

void Disciplina::removerAluno(int ID) {
  
  if(alunos.getTamanho() == 0) return; 

  //coloca o iterador no início e já verifica se é o elemento que deve ser eliminado
  if (alunos.irInicio()->getID() == ID) {
    alunos.removerElementoInicio();
  
  } else {
    while (!alunos.noFim()) {
      
      if (alunos.avancar()->getID() == ID) alunos.removerAlunoAtual();
    }
    
  }
}

void Disciplina::setID(int ID) {
  id = ID;
}

int Disciplina::getID() {
  return id;
}