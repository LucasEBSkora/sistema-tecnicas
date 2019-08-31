#include "ListaAlunos.h"

ListaAlunos::ListaAlunos() : inicio{nullptr}, fim{nullptr}, atual{nullptr}, tamanho{0} {

}

ListaAlunos::~ListaAlunos() {

  while(tamanho != 0) {
    removerElementoFim();
  }

  inicio = nullptr;
  fim = nullptr;
  atual = nullptr;
}

unsigned int ListaAlunos::getTamanho() {
  return tamanho;
}

Aluno* ListaAlunos::irInicio() {
  atual = inicio;
  return getAtual(); 
}

Aluno* ListaAlunos::avancar() {

  atual = (atual->depois != nullptr) ? atual->depois : atual;
  return getAtual();
}

Aluno* ListaAlunos::voltar() {
  atual = (atual->antes != nullptr) ? atual->antes : atual;
  return getAtual();
}

Aluno* ListaAlunos::irFim() {
  atual = fim;
  return getAtual();
}

Aluno* ListaAlunos::irIndice(unsigned int indice) {
  atual = inicio;

  for (unsigned int i = 0; i < indice; ++i) {
    avancar();
  }
  return atual->el;
}


bool ListaAlunos::noInicio() {
  return atual == inicio;
}

bool ListaAlunos::noFim() {
  return atual == fim;
}


void ListaAlunos::adicionarElementoInicio(Aluno* nova) {
  if  (tamanho == 0) {
    adicionarPrimeiroElemento(nova);
  } else {

    //cria novo elemento com nada antes e o inicio "depois"
    ElementoListaAluno *novo = new ElementoListaAluno(nova, nullptr, inicio);
    //coloca novo antes do inicio
    if (inicio != nullptr) inicio->antes = novo;
    //coloca novo como inicio
    inicio = novo;
    
    ++tamanho;
  }


}

void ListaAlunos::adicionarElementoFim(Aluno* nova) {
  if  (tamanho == 0) {
    adicionarPrimeiroElemento(nova);
  } else {

    //cria novo elemento com o fim antes e nada depois
    ElementoListaAluno *novo = new ElementoListaAluno(nova, fim, nullptr);
    //coloca novo depois do fim
    fim->depois = novo;
    //coloca novo como fim
    fim = novo;
    ++tamanho;
  }
}

bool ListaAlunos::adicionarElementoIndice(Aluno* nova, unsigned int indice) {
  if (tamanho == 0) {
    adicionarPrimeiroElemento(nova);
    return indice == 0;
  }
  
  bool ret;

  //se o indice desejado for muito alto, simplesmente coloca o elemento no fim da lista (e retorna falso)
  if (indice > tamanho) { 
    adicionarElementoFim(nova);
    ret = false;
  } else {
    
    ElementoListaAluno* p = inicio;
    for (unsigned int i = 0; i < indice - 1; ++i) {
      p = p->depois;
    }
    ElementoListaAluno* novoElemento = new ElementoListaAluno(nova, p, p->depois);
    p->depois->antes = novoElemento;
    p->depois = novoElemento;
    ret = true;
  }
  ++tamanho;
  return ret;

}

void ListaAlunos::adicionarPrimeiroElemento(Aluno* nova) {
  if (tamanho != 0) return;
  ElementoListaAluno* novoElemento = new ElementoListaAluno(nova, nullptr, nullptr);
  inicio == novoElemento;
  fim = novoElemento;
  ++tamanho;
}

Aluno* ListaAlunos::removerElementoInicio() {
  if (atual == inicio) atual == nullptr;
  if (inicio != nullptr) {
    
    //recupera o elemento que será o novo inicio
    ElementoListaAluno *aux = inicio->depois;

    //aterra o ponteiro do novo início (se houver)
    if (aux != nullptr) aux->antes = nullptr; 

    //recupera a Aluno representada pelo inicio antigo (para poder retorná-la)
    Aluno* al = inicio->el;
    
    //destroi o inicio antigo
    delete inicio;
    
    //e atualiza-o para o novo
    inicio = aux;
    
    --tamanho;

    return al;

  } else {
    return nullptr;
  }
}

Aluno* ListaAlunos::removerElementoFim() {
  if (atual == fim) atual == nullptr;
    if (fim != nullptr) {
    
    //recupera o elemento que será o novo fim
    ElementoListaAluno *aux = fim->antes;

    //aterra o ponteiro do novo fim (se houver)
    if (aux != nullptr) aux->depois = nullptr; 

    //recupera a Aluno representada pelo fim antigo (para poder retorná-la)
    Aluno* al = fim->el;
    
    //destroi o fim antigo
    delete fim;
    
    //e atualiza-o para o novo
    fim = aux;
    
    --tamanho;

    return al;

  } else {
    return nullptr;
  }

}

Aluno* ListaAlunos::removerElementoIndice(unsigned int indice) {
  if (indice >= tamanho) return nullptr;
  else if (indice == tamanho -1) return removerElementoFim();
  else if (indice == 0) return removerElementoInicio();
  else {
    
    ElementoListaAluno* p = inicio;
    
    //encontra o elemento a remover
    for (unsigned int i = 0; i < indice; ++i) {
      p = p->depois;
    }
    //faz o elemento antes dele apontar para o depois dele
    p->antes->depois = p->depois;
    //faz o elemento depois dele apontar para o antes dele
    p->depois->antes = p->antes;
    //recupera a Aluno armazenada
    Aluno* al = p->el;
    
    delete p;

    --tamanho;

    return al;
  }

}

Aluno* ListaAlunos::removerAlunoAtual() {
  if (atual == nullptr) return nullptr;
  else {
        //faz o elemento antes dele apontar para o depois dele
    if (atual->antes != nullptr) atual->antes->depois = atual->depois;
    //faz o elemento depois dele apontar para o antes dele
    if (atual->depois != nullptr) atual->depois->antes = atual->antes;
    //recupera a Aluno armazenada
    Aluno* al = atual->el;

    delete atual;
    atual = nullptr;
    
    return al;
    
  }

}


Aluno* ListaAlunos::getAtual() {
  return (atual != nullptr) ? atual->el : nullptr;
}
