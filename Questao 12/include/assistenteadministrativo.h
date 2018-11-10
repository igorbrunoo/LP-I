#ifndef ASSISTENTE_ADMINISTRATIVO_H
#define ASSISTENTE_ADMINISTRATIVO_H

#include "funcionario.h"
#include <string>

using namespace std;

class AssistenteAdministrativo : public Funcionario{
    private:
        string m_turno;
        float m_participacao;

    public:
        AssistenteAdministrativo(string nome_, int idade_, float altura_, string matricula_, double salario_, string turno_, float participacao_);
        ~AssistenteAdministrativo();
        string getTurno();
        float getParticipacao();

        friend ostream &operator<<(ostream &o, AssistenteAdministrativo &a);
};

#endif