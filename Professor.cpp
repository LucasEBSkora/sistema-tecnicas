#include "professor.h"


void Professor::imprimeUniversidade() {
  cout << nome << " trabalha em " << universidade->informarNome() << "no departamento " << departamento->informarNome() << endl;
}
