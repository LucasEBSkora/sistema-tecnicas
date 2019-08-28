#include "ListaUniversidades.h"

ListaUniversidades::ListaUniversidades() : inicio{NULL}, fim{NULL}, atual{NULL}, tamanho{0} {

}

ListaUniversidades::~ListaUniversidades() {

  while(tamanho != 0) {
    removerElementoFim();
  }

  inicio = NULL;
  fim = NULL;
  atual = NULL;
}

unsigned int ListaUniversidades::getTamanho() {
  return tamanho;
}

Universidade* ListaUniversidades::irInicio() {
  atual = inicio;
  return getAtual(); 
}

Universidade* ListaUniversidades::avancar() {

  atual = (atual->depois != NULL) ? atual->depois : atual;
  return getAtual();
}

Universidade* ListaUniversidades::voltar() {
  atual = (atual->antes != NULL) ? atual->antes : atual;
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
  return atual->universidade;
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
    ElementoListaUniversidade *novo = new ElementoListaUniversidade(nova, NULL, inicio);
    //coloca novo antes do inicio
    if (inicio != NULL) inicio->antes = novo;
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
    ElementoListaUniversidade *novo = new ElementoListaUniversidade(nova, fim, NULL);
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
  ElementoListaUniversidade* novoElemento = new ElementoListaUniversidade(nova, NULL, NULL);
  inicio == novoElemento;
  fim = novoElemento;
  ++tamanho;
}

Universidade* ListaUniversidades::removerElementoInicio() {
  if (atual == inicio) atual == NULL;
  if (inicio != NULL) {
    
    //recupera o elemento que será o novo inicio
    ElementoListaUniversidade *aux = inicio->depois;

    //aterra o ponteiro do novo início (se houver)
    if (aux != NULL) aux->antes = NULL; 

    //recupera a universidade representada pelo inicio antigo (para poder retorná-la)
    Universidade* uni = inicio->universidade;
    
    //destroi o inicio antigo
    delete inicio;
    
    //e atualiza-o para o novo
    inicio = aux;
    
    --tamanho;

    return uni;

  } else {
    return NULL;
  }
}

Universidade* ListaUniversidades::removerElementoFim() {
  if (atual == fim) atual == NULL;
    if (fim != NULL) {
    
    //recupera o elemento que será o novo fim
    ElementoListaUniversidade *aux = fim->antes;

    //aterra o ponteiro do novo fim (se houver)
    if (aux != NULL) aux->depois = NULL; 

    //recupera a universidade representada pelo fim antigo (para poder retorná-la)
    Universidade* uni = fim->universidade;
    
    //destroi o fim antigo
    delete fim;
    
    //e atualiza-o para o novo
    fim = aux;
    
    --tamanho;

    return uni;

  } else {
    return NULL;
  }

}

Universidade* ListaUniversidades::removerElementoIndice(unsigned int indice) {
  if (indice >= tamanho) return NULL;
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
    Universidade* uni = p->universidade;
    
    delete p;

    --tamanho;

    return uni;
  }

}


Universidade* ListaUniversidades::getAtual() {
  return (atual != NULL) ? atual->universidade : NULL;
}
