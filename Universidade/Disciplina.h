#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include "../utils/String.h"
#include "../listas/aluno/ListaAlunos.h"
#include "../Pessoas/Aluno.h"

class Disciplina {
  private:
    int id;
    String nome;
    String areaDoConhecimento;
    unsigned int maxAlunos;
    ListaAlunos alunos;
  public:
    Disciplina();
    ~Disciplina();
    Disciplina(int ID, String Nome, String AreaDoConhecimento, unsigned int MaxAlunos);
    void adicionarAluno(Aluno *novoAluno);
    void removerAluno(int ID);
    void setID(int ID);
    int getID() const;
    void setNome(String Nome);
    String getNome() const;
    void imprimir();
};

#endif
