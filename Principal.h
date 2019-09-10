#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include "Pessoas/Professor.h"
#include "Pessoas/Aluno.h"
#include "Universidade/Departamento.h"
#include "Universidade/Universidade.h"
#include "Universidade/Disciplina.h"
#include "utils/Lista.h"
#include "utils/Data.h"

class Principal {

  private:
    int idAtual;

    Universidade princeton;
    Universidade cambridge;
    Universidade UTFPR;

    Departamento DAINF;
    Departamento fisicaPrinceton;
    Departamento matematicaCambridge;

    Professor simao;
    Professor newton;
    Professor einstein;

    Disciplina tecProg;
    Disciplina fundProg1;
    Disciplina intrLog;

    Aluno thiago;
    Aluno franco;
    Aluno lucas;

    Lista<Universidade*> universidades;
    Lista<Departamento*> departamentos;
    Lista<Professor*> professores;
    Lista<Disciplina*> disciplinas;
    Lista<Aluno*> alunos;

    Data dataAtual;

  public:
    Principal();
    ~Principal();
    int executar();

  private:
    void inicProfessores();
    void inicUniversidades();
    void inicDepartamentos();
    void inicDisciplinas();
    void inicAlunos();
    void imprimeProfessores();
    void imprimeUniversidades();
    void imprimeDepartamentos();
    void imprimeDisciplinas();
    void imprimeAlunos();

};


#endif
