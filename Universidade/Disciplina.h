#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include "../listas/aluno/ListaAlunos.h"
#include "../Pessoas/Aluno.h"

class Disciplina {
  private:
    int id;
    std::string nome;
    std::string areaDoConhecimento;
    ListaAlunos alunos;
  public:
    Disciplina();
    ~Disciplina();
    Disciplina(int ID, std::string Nome, std::string AreaDoConhecimento);
    void AdicionarAluno(Aluno *novoAluno);
    void removerAluno(int ID);
    void setID(int ID);
    int getID();
};

#endif
