/**
 * @file gerente.cpp
 * @author Igor Bruno Damasceno (igoor.bruuno@gmail.com)
 * @brief Implementação da classe Gerente, derivada da classe Funcionario
 * @version 0.1
 * @date 11-09-2018
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include "funcionario.h"
#include "gerente.h"
#include <string>

using namespace std;

/**
 * @brief Construct a new Gerente:: Gerente object
 * 
 * @param nome_ Nome do gerente, passado para o construtor da classe Funcionario e Pessoa
 * @param idade_ Idade do gerente, passado para o construtor da classe Funcionario e Pessoa
 * @param altura_ Altura do gerente, passado para o construtor da classe Funcionario e Pessoa
 * @param matricula_ Matrícula do gerente, passado para o construtor da classe Funcionario
 * @param salario_ Salário do gerente, passado para o construtor da classe Funcionario
 */
Gerente::Gerente(string nome_, int idade_, float altura_, string matricula_, double salario_):
    Funcionario(nome_, idade_, altura_, matricula_, salario_){}

/**
 * @brief Destroy the Gerente:: Gerente object
 * 
 */
Gerente::~Gerente(){}

/**
 * @brief Sobrecarga do operador de inserção
 * 
 * @param o 
 * @param g 
 * @return ostream& 
 */
ostream &operator<<(ostream &o, Gerente &g){
    o << "Nome: " << g.getNome() << "\n"
      << "Idade: " << g.getIdade() << "\n"
      << "Altura: " << g.getAltura() << "\n"
      << "Matrícula: " << g.getMatricula() << "\n"
      << "Salário: R$ " << g.getSalario();
    return o;
}