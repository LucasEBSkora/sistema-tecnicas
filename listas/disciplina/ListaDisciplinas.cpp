#include "ListaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas() : inicio{nullptr}, fim{nullptr}, atual{nullptr}, tamanho{0} {

}

ListaDisciplinas::~ListaDisciplinas() {

  while(tamanho != 0) {
    removerElementoFim();
  }

  inicio = nullptr;
  fim = nullptr;
  atual = nullptr;
}

unsigned int ListaDisciplinas::getTamanho() {
  return tamanho;
}

Disciplina* ListaDisciplinas::irInicio() {
  atual = inicio;
  return getAtual(); 
}

Disciplina* ListaDisciplinas::avancar() {

  atual = (atual->depois != nullptr) ? atual->depois : atual;
  return getAtual();
}

Disciplina* ListaDisciplinas::voltar() {
  atual = (atual->antes != nullptr) ? atual->antes : atual;
  return getAtual();
}

Disciplina* ListaDisciplinas::irFim() {
  atual = fim;
  return getAtual();
}

Disciplina* ListaDisciplinas::irIndice(unsigned int indice) {
  atual = inicio;

  for (unsigned int i = 0; i < indice; ++i) {
    avancar();
  }
  return atual->el;
}


bool ListaDisciplinas::noInicio() {
  return atual == inicio;
}

bool ListaDisciplinas::noFim() {
  return atual == fim;
}


void ListaDisciplinas::adicionarElementoInicio(Disciplina* nova) {
  if  (tamanho == 0) {
    adicionarPrimeiroElemento(nova);
  } else {

    //cria novo elemento com nada antes e o inicio "depois"
    ElementoListaDisciplina *novo = new ElementoListaDisciplina(nova, nullptr, inicio);
    //coloca novo antes do inicio
    if (inicio != nullptr) inicio->antes = novo;
    //coloca novo como inicio
    inicio = novo;
    
    ++tamanho;
  }


}

void ListaDisciplinas::adicionarElementoFim(Disciplina* nova) {
  if  (tamanho == 0) {
    adicionarPrimeiroElemento(nova);
  } else {

    //cria novo elemento com o fim antes e nada depois
    ElementoListaDisciplina *novo = new ElementoListaDisciplina(nova, fim, nullptr);
    //coloca novo depois do fim
    fim->depois = novo;
    //coloca novo como fim
    fim = novo;
    ++tamanho;
  }
}

bool ListaDisciplinas::adicionarElementoIndice(Disciplina* nova, unsigned int indice) {
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
    
    ElementoListaDisciplina* p = inicio;
    for (unsigned int i = 0; i < indice - 1; ++i) {
      p = p->depois;
    }
    ElementoListaDisciplina* novoElemento = new ElementoListaDisciplina(nova, p, p->depois);
    p->depois->antes = novoElemento;
    p->depois = novoElemento;
    ret = true;
  }
  ++tamanho;
  return ret;

}

void ListaDisciplinas::adicionarPrimeiroElemento(Disciplina* nova) {
  if (tamanho != 0) return;
  ElementoListaDisciplina* novoElemento = new ElementoListaDisciplina(nova, nullptr, nullptr);
  inicio == novoElemento;
  fim = novoElemento;
  ++tamanho;
}

Disciplina* ListaDisciplinas::removerElementoInicio() {
  if (atual == inicio) atual == nullptr;
  if (inicio != nullptr) {
    
    //recupera o elemento que será o novo inicio
    ElementoListaDisciplina *aux = inicio->depois;

    //aterra o ponteiro do novo início (se houver)
    if (aux != nullptr) aux->antes = nullptr; 

    //recupera a Disciplina representada pelo inicio antigo (para poder retorná-la)
    Disciplina* al = inicio->el;
    
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

Disciplina* ListaDisciplinas::removerElementoFim() {
  if (atual == fim) atual == nullptr;
    if (fim != nullptr) {
    
    //recupera o elemento que será o novo fim
    ElementoListaDisciplina *aux = fim->antes;

    //aterra o ponteiro do novo fim (se houver)
    if (aux != nullptr) aux->depois = nullptr; 

    //recupera a Disciplina representada pelo fim antigo (para poder retorná-la)
    Disciplina* al = fim->el;
    
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

Disciplina* ListaDisciplinas::removerElementoIndice(unsigned int indice) {
  if (indice >= tamanho) return nullptr;
  else if (indice == tamanho -1) return removerElementoFim();
  else if (indice == 0) return removerElementoInicio();
  else {
    
    ElementoListaDisciplina* p = inicio;
    
    //encontra o elemento a remover
    for (unsigned int i = 0; i < indice; ++i) {
      p = p->depois;
    }
    //faz o elemento antes dele apontar para o depois dele
    p->antes->depois = p->depois;
    //faz o elemento depois dele apontar para o antes dele
    p->depois->antes = p->antes;
    //recupera a Disciplina armazenada
    Disciplina* al = p->el;
    
    delete p;

    --tamanho;

    return al;
  }

}

Disciplina* ListaDisciplinas::removerDisciplinaAtual() {
  if (atual == nullptr) return nullptr;
  else {
        //faz o elemento antes dele apontar para o depois dele
    if (atual->antes != nullptr) atual->antes->depois = atual->depois;
    //faz o elemento depois dele apontar para o antes dele
    if (atual->depois != nullptr) atual->depois->antes = atual->antes;
    //recupera a Disciplina armazenada
    Disciplina* al = atual->el;

    delete atual;
    atual = nullptr;
    
    return al;
    
  }

}


Disciplina* ListaDisciplinas::getAtual() {
  return (atual != nullptr) ? atual->el : nullptr;
}
