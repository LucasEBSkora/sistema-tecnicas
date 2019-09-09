template<typename TIPO>
Lista<TIPO>::Lista() : inicio{nullptr}, fim{nullptr}, atual{nullptr}, tamanho{0} {

}

template<typename TIPO>
Lista<TIPO>::~Lista() {

  while(tamanho != 0) {
    removerElementoFim();
  }

  inicio = nullptr;
  fim = nullptr;
  atual = nullptr;
}

template<typename TIPO>
unsigned int Lista<TIPO>::getTamanho() {
  return tamanho;
}

template<typename TIPO>
TIPO Lista<TIPO>::irInicio() {
  atual = inicio;
  return getAtual();
}

template<typename TIPO>
TIPO Lista<TIPO>::avancar() {
  atual = atual->depois;
  return getAtual();
}

template<typename TIPO>
TIPO Lista<TIPO>::voltar() {
  atual = atual->antes;
  return getAtual();
}

template<typename TIPO>
TIPO Lista<TIPO>::irFim() {
  atual = fim;
  return getAtual();
}

template<typename TIPO>
TIPO Lista<TIPO>::irIndice(unsigned int indice) {
  atual = inicio;

  for (unsigned int i = 0; i < indice; ++i) {
    avancar();
  }
  return atual->el;
}

template<typename TIPO>
bool Lista<TIPO>::noInicio() {
  return atual == inicio;
}

template<typename TIPO>
bool Lista<TIPO>::noFim() {
  return atual == fim;
}

template<typename TIPO>
void Lista<TIPO>::adicionarElementoInicio(TIPO nova) {
  if  (tamanho == 0) {
    adicionarPrimeiroElemento(nova);
  } else {

    //cria novo elemento com nada antes e o inicio "depois"
    ElementoLista<TIPO> *novo = new ElementoLista<TIPO>(nova, nullptr, inicio);
    //coloca novo antes do inicio
    if (inicio != nullptr) inicio->antes = novo;
    //coloca novo como inicio
    inicio = novo;

    ++tamanho;
  }


}

template<typename TIPO>
void Lista<TIPO>::adicionarElementoFim(TIPO nova) {
  if  (tamanho == 0) {
    adicionarPrimeiroElemento(nova);
  } else {

    //cria novo elemento com o fim antes e nada depois
    ElementoLista<TIPO> *novo = new ElementoLista<TIPO>(nova, fim, nullptr);
    //coloca novo depois do fim
    fim->depois = novo;
    //coloca novo como fim
    fim = novo;
    ++tamanho;
  }
}
template<typename TIPO>
bool Lista<TIPO>::adicionarElementoIndice(TIPO nova, unsigned int indice) {
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

    ElementoLista<TIPO>* p = inicio;
    for (unsigned int i = 0; i < indice - 1; ++i) {
    p = p->depois;
    }
    ElementoLista<TIPO>* novoElemento = new ElementoLista<TIPO>(nova, p, p->depois);
    p->depois->antes = novoElemento;
    p->depois = novoElemento;
    ret = true;
  }
  ++tamanho;
  return ret;

}
template<typename TIPO>
void Lista<TIPO>::adicionarPrimeiroElemento(TIPO nova) {
  if (tamanho != 0) return;
  ElementoLista<TIPO>* novoElemento = new ElementoLista<TIPO>(nova, nullptr, nullptr);
  inicio = novoElemento;
  fim = novoElemento;
  ++tamanho;
}

template<typename TIPO>
TIPO Lista<TIPO>::removerElementoInicio() {
  if (atual == inicio) atual == nullptr;
  if (inicio != nullptr) {

    //recupera o elemento que será o novo inicio
    ElementoLista<TIPO> *aux = inicio->depois;

    //aterra o ponteiro do novo início (se houver)
    if (aux != nullptr) aux->antes = nullptr;

    //recupera a  representada pelo inicio antigo (para poder retorná-la)
    TIPO elem = inicio->el;

    //destroi o inicio antigo
    delete inicio;

    //e atualiza-o para o novo
    inicio = aux;

    --tamanho;

    return elem;

  } else {
    return nullptr;
  }
}

template<typename TIPO>
TIPO Lista<TIPO>::removerElementoFim() {
  if (atual == fim) atual == nullptr;
    if (fim != nullptr) {

    //recupera o elemento que será o novo fim
    ElementoLista<TIPO> *aux = fim->antes;

    //aterra o ponteiro do novo fim (se houver)
    if (aux != nullptr) aux->depois = nullptr;

    //recupera a  representada pelo fim antigo (para poder retorná-la)
    TIPO elem = fim->el;

    //destroi o fim antigo
    delete fim;

    //e atualiza-o para o novo
    fim = aux;

    --tamanho;

    return elem;

  } else {
    return nullptr;
  }

}
template<typename TIPO>
TIPO Lista<TIPO>::removerElementoIndice(unsigned int indice) {
  if (indice >= tamanho) return nullptr;
  else if (indice == tamanho -1) return removerElementoFim();
  else if (indice == 0) return removerElementoInicio();
  else {

    ElementoLista<TIPO>* p = inicio;

    //encontra o elemento a remover
    for (unsigned int i = 0; i < indice; ++i) {
      p = p->depois;
    }
    //faz o elemento antes dele apontar para o depois dele
    p->antes->depois = p->depois;
    //faz o elemento depois dele apontar para o antes dele
    p->depois->antes = p->antes;
    //recupera a  armazenada
    TIPO elem = p->el;

    delete p;

    --tamanho;

    return elem;
  }

}

template<typename TIPO>
TIPO Lista<TIPO>::removerAtual() {
  if (atual == nullptr) return nullptr;
  else {
        //faz o elemento antes dele apontar para o depois dele
    if (atual->antes != nullptr) atual->antes->depois = atual->depois;
    //faz o elemento depois dele apontar para o antes dele
    if (atual->depois != nullptr) atual->depois->antes = atual->antes;
    //recupera a  armazenada
    TIPO elem = atual->el;

    delete atual;
    atual = nullptr;

    return elem;

  }

}


template<typename TIPO>
TIPO Lista<TIPO>::getAtual() {
  return (atual != nullptr) ? atual->el : nullptr;
}
