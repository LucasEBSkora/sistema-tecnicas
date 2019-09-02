#include "ListaUniversidades.h"

ListaUniversidades::ListaUniversidades() : inicio{nullptr}, fim{nullptr}, atual{nullptr}, tamanho{0} {

}

ListaUniversidades::~ListaUniversidades() {

  while(tamanho != 0) {
    removerElementoFim();
  }

  inicio = nullptr;
  fim = nullptr;
  atual = nullptr;
}

unsigned int ListaUniversidades::getTamanho() {
  return tamanho;
}

Universidade* ListaUniversidades::irInicio() {
  atual = inicio;
  return getAtual(); 
}

Universidade* ListaUniversidades::avancar() {
  atual = atual->depois;
  return getAtual();
}

Universidade* ListaUniversidades::voltar() {
  atual = atual->antes;  
  return getAtual();
}

Universidade* ListaUniversidades::irFim() {
  atual = fim;
  return getAtual();
}

Universidade* ListaUniversidades::irIndice(unsigned int indice) {
  atual = inicio;

  for (unsigned int i = 0; i < indice; ++i) {
    avancar();
  }
  return atual->el;
}


bool ListaUniversidades::noInicio() {
  return atual == inicio;
}

bool ListaUniversidades::noFim() {
  return atual == fim;
}


void ListaUniversidades::adicionarElementoInicio(Universidade* nova) {
  if  (tamanho == 0) {
    adicionarPrimeiroElemento(nova);
  } else {

    //cria novo elemento com nada antes e o inicio "depois"
    ElementoListaUniversidade *novo = new ElementoListaUniversidade(nova, nullptr, inicio);
    //coloca novo antes do inicio
    if (inicio != nullptr) inicio->antes = novo;
    //coloca novo como inicio
    inicio = novo;
    
    ++tamanho;
  }


}

void ListaUniversidades::adicionarElementoFim(Universidade* nova) {
  if  (tamanho == 0) {
    adicionarPrimeiroElemento(nova);
  } else {

    //cria novo elemento com o fim antes e nada depois
    ElementoListaUniversidade *novo = new ElementoListaUniversidade(nova, fim, nullptr);
    //coloca novo depois do fim
    fim->depois = novo;
    //coloca novo como fim
    fim = novo;
    ++tamanho;
  }
}

bool ListaUniversidades::adicionarElementoIndice(Universidade* nova, unsigned int indice) {
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
    
    ElementoListaUniversidade* p = inicio;
    for (unsigned int i = 0; i < indice - 1; ++i) {
      p = p->depois;
    }
    ElementoListaUniversidade* novoElemento = new ElementoListaUniversidade(nova, p, p->depois);
    p->depois->antes = novoElemento;
    p->depois = novoElemento;
    ret = true;
  }
  ++tamanho;
  return ret;

}

void ListaUniversidades::adicionarPrimeiroElemento(Universidade* nova) {
  if (tamanho != 0) return;
  ElementoListaUniversidade* novoElemento = new ElementoListaUniversidade(nova, nullptr, nullptr);
  inicio = novoElemento;
  fim = novoElemento;
  ++tamanho;
}

Universidade* ListaUniversidades::removerElementoInicio() {
  if (atual == inicio) atual == nullptr;
  if (inicio != nullptr) {
    
    //recupera o elemento que será o novo inicio
    ElementoListaUniversidade *aux = inicio->depois;

    //aterra o ponteiro do novo início (se houver)
    if (aux != nullptr) aux->antes = nullptr; 

    //recupera a universidade representada pelo inicio antigo (para poder retorná-la)
    Universidade* uni = inicio->el;
    
    //destroi o inicio antigo
    delete inicio;
    
    //e atualiza-o para o novo
    inicio = aux;
    
    --tamanho;

    return uni;

  } else {
    return nullptr;
  }
}

Universidade* ListaUniversidades::removerElementoFim() {
  if (atual == fim) atual == nullptr;
    if (fim != nullptr) {
    
    //recupera o elemento que será o novo fim
    ElementoListaUniversidade *aux = fim->antes;

    //aterra o ponteiro do novo fim (se houver)
    if (aux != nullptr) aux->depois = nullptr; 

    //recupera a universidade representada pelo fim antigo (para poder retorná-la)
    Universidade* uni = fim->el;
    
    //destroi o fim antigo
    delete fim;
    
    //e atualiza-o para o novo
    fim = aux;
    
    --tamanho;

    return uni;

  } else {
    return nullptr;
  }

}

Universidade* ListaUniversidades::removerElementoIndice(unsigned int indice) {
  if (indice >= tamanho) return nullptr;
  else if (indice == tamanho -1) return removerElementoFim();
  else if (indice == 0) return removerElementoInicio();
  else {
    
    ElementoListaUniversidade* p = inicio;
    
    //encontra o elemento a remover
    for (unsigned int i = 0; i < indice; ++i) {
      p = p->depois;
    }
    //faz o elemento antes dele apontar para o depois dele
    p->antes->depois = p->depois;
    //faz o elemento depois dele apontar para o antes dele
    p->depois->antes = p->antes;
    //recupera a universidade armazenada
    Universidade* uni = p->el;
    
    delete p;

    --tamanho;

    return uni;
  }

}


Universidade* ListaUniversidades::getAtual() {
  return (atual != nullptr) ? atual->el : nullptr;
}
