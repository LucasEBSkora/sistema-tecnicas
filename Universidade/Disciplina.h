#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

class Disciplina {
  private:
    int id;
    std::string nome;
    std::string areaDoConhecimento;
  public:
    Disciplina();
    ~Disciplina();
    Disciplina(int ID, std::string Nome, std::string AreaDoConhecimento);
  

};

#endif
