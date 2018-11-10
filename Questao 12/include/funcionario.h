#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "pessoa.h"
#include <string>
#include <iostream>

using namespace std;

class Funcionario : public Pessoa{
    protected:
        string  m_matricula;
        double m_salario;

    public:
        Funcionario(string nome_, int idade_, float altura_, string matricula_, double salario_);
        ~Funcionario();
        string getMatricula();
        double getSalario();
        void setSalario(double novo_);

        friend ostream &operator<<(ostream &o, Funcionario &f);
};

#endif