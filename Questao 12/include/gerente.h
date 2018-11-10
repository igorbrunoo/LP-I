#ifndef GERENTE_H
#define GERENTE_H

#include "pessoa.h"
#include "funcionario.h"
#include <string>

using namespace std;


class Gerente : public Funcionario{
    public:
        Gerente(string nome_, int idade_, float altura_, string matricula_, double salario_);
        ~Gerente();
};


#endif