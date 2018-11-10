#ifndef ASSISTENTE_TECNICO_H
#define ASSISTENTE_TECNICO_H

#include "funcionario.h"
#include <string>

using namespace std;

class AssistenteTecnico : public Funcionario{
    private:
        Funcionario * m_supervisor;
        float m_bonusSalarial;

    public:
      AssistenteTecnico(string nome_, int idade_, float altura_, string matricula_, double salario_, Funcionario *supervisor_, float bonusSalarial_);
      ~AssistenteTecnico();
      Funcionario *getSupervisor();
      float getBonusSalarial();
      float getSalario();

      friend ostream &operator<<(ostream &o, AssistenteTecnico &a);
};

#endif