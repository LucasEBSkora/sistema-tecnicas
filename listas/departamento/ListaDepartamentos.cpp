#include "ListaDepartamentos.h"

ListaDepartamentos::ListaDepartamentos() : inicio{nullptr}, fim{nullptr}, atual{nullptr}, tamanho{0} {

}

ListaDepartamentos::~ListaDepartamentos() {

  while(tamanho != 0) {
    removerElementoFim();
  }

  inicio = nullptr;
  fim = nullptr;
  atual = nullptr;
}

unsigned int ListaDepartamentos::getTamanho() {
  return tamanho;
}

Departamento* ListaDepartamentos::irInicio() {
  atual = inicio;
  return getAtual(); 
}

Departamento* ListaDepartamentos::avancar() {
  atual = atual->depois;
  return getAtual();
}

Departamento* ListaDepartamentos::voltar() {
  atual = atual->antes;
  return getAtual();
}

Departamento* ListaDepartamentos::irFim() {
  atual = fim;
  return getAtual();
}

Departamento* ListaDepartamentos::irIndice(unsigned int indice) {
  atual = inicio;

  for (unsigned int i = 0; i < indice; ++i) {
    avancar();
  }
  return atual->el;
}


bool ListaDepartamentos::noInicio() {
  return atual == inicio;
}

bool ListaDepartamentos::noFim() {
  return atual == fim;
}


void ListaDepartamentos::adicionarElementoInicio(Departamento* nova) {
  if  (tamanho == 0) {
    adicionarPrimeiroElemento(nova);
  } else {

    //cria novo elemento com nada antes e o inicio "depois"
    ElementoListaDepartamento *novo = new ElementoListaDepartamento(nova, nullptr, inicio);
    //coloca novo antes do inicio
    if (inicio != nullptr) inicio->antes = novo;
    //coloca novo como inicio
    inicio = novo;
    
    ++tamanho;
  }


}

void ListaDepartamentos::adicionarElementoFim(Departamento* nova) {
  if  (tamanho == 0) {
    adicionarPrimeiroElemento(nova);
  } else {

    //cria novo elemento com o fim antes e nada depois
    ElementoListaDepartamento *novo = new ElementoListaDepartamento(nova, fim, nullptr);
    //coloca novo depois do fim
    fim->depois = novo;
    //coloca novo como fim
    fim = novo;
    ++tamanho;
  }
}

bool ListaDepartamentos::adicionarElementoIndice(Departamento* nova, unsigned int indice) {
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
    
    ElementoListaDepartamento* p = inicio;
    for (unsigned int i = 0; i < indice - 1; ++i) {
      p = p->depois;
    }
    ElementoListaDepartamento* novoElemento = new ElementoListaDepartamento(nova, p, p->depois);
    p->depois->antes = novoElemento;
    p->depois = novoElemento;
    ret = true;
  }
  ++tamanho;
  return ret;

}

void ListaDepartamentos::adicionarPrimeiroElemento(Departamento* nova) {
  if (tamanho != 0) return;
  ElementoListaDepartamento* novoElemento = new ElementoListaDepartamento(nova, nullptr, nullptr);
  inicio = novoElemento;
  fim = novoElemento;
  ++tamanho;
}

Departamento* ListaDepartamentos::removerElementoInicio() {
  if (atual == inicio) atual == nullptr;
  if (inicio != nullptr) {
    
    //recupera o elemento que será o novo inicio
    ElementoListaDepartamento *aux = inicio->depois;

    //aterra o ponteiro do novo início (se houver)
    if (aux != nullptr) aux->antes = nullptr; 

    //recupera a Departamento representada pelo inicio antigo (para poder retorná-la)
    Departamento* uni = inicio->el;
    
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

Departamento* ListaDepartamentos::removerElementoFim() {
  if (atual == fim) atual == nullptr;
    if (fim != nullptr) {
    
    //recupera o elemento que será o novo fim
    ElementoListaDepartamento *aux = fim->antes;

    //aterra o ponteiro do novo fim (se houver)
    if (aux != nullptr) aux->depois = nullptr; 

    //recupera a Departamento representada pelo fim antigo (para poder retorná-la)
    Departamento* uni = fim->el;
    
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

Departamento* ListaDepartamentos::removerElementoIndice(unsigned int indice) {
  if (indice >= tamanho) return nullptr;
  else if (indice == tamanho -1) return removerElementoFim();
  else if (indice == 0) return removerElementoInicio();
  else {
    
    ElementoListaDepartamento* p = inicio;
    
    //encontra o elemento a remover
    for (unsigned int i = 0; i < indice; ++i) {
      p = p->depois;
    }
    //faz o elemento antes dele apontar para o depois dele
    p->antes->depois = p->depois;
    //faz o elemento depois dele apontar para o antes dele
    p->depois->antes = p->antes;
    //recupera a Departamento armazenada
    Departamento* uni = p->el;
    
    delete p;

    --tamanho;

    return uni;
  }

}


Departamento* ListaDepartamentos::getAtual() {
  return (atual != nullptr) ? atual->el : nullptr;
}
