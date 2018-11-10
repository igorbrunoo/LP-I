/**
 * @file funcionario.cpp
 * @author Igor Bruno Damasceno (igoor.bruuno@gmail.com)
 * @brief Implementação da classe Funcionario, derivada da classe Pessoa
 * @version 0.1
 * @date 11-09-2018
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include "funcionario.h"
#include <string>
#include <iostream>

using namespace std;

/**
 * @brief Construct a new Funcionario:: Funcionario object
 * 
 * @param nome_ Nome do funcionário, passado para o construtor da classe Pessoa
 * @param idade_ Idade do funcionário, passado para o construtor da classe Pessoa
 * @param altura_ Altura do funcionário, passado para o construtor da classe Pessoa
 * @param matricula_ Matrícula do funcionário
 * @param salario_ Salário do funcionário
 */
Funcionario::Funcionario(string nome_, int idade_, float altura_, string matricula_, double salario_):
    Pessoa(nome_, idade_, altura_), m_matricula(matricula_), m_salario(salario_){}

/**
 * @brief Destroy the Funcionario:: Funcionario object
 * 
 */
Funcionario::~Funcionario(){}

/**
 * @brief Retorna a matrícula (m_matricula) do funcionário
 * 
 * @return string 
 */
string Funcionario::getMatricula(){
    return m_matricula;
}

/**
 * @brief Retorna o salário (m_salario) do funcionário
 * 
 * @return double 
 */
double Funcionario::getSalario(){
    return m_salario;
}

/**
 * @brief Altera o salário (m_salario) do funcionário de acordo com o parâmetro passado
 * 
 * @param novo_ 
 */
void Funcionario::setSalario(double novo_){
    m_salario = novo_;
}

/**
 * @brief Sobrecarga do operador de inserção
 * 
 * @param o 
 * @param f 
 * @return ostream& 
 */
ostream &operator<<(ostream &o, Funcionario &f){
    o << "Nome: " << f.getNome() << "\n"
      << "Idade: " << f.getIdade() << "\n"
      << "Altura: " << f.getAltura() << "\n"
      << "Matrícula: " << f.getMatricula() << "\n"
      << "Salário: R$ " << f.getSalario();
    return o;
}