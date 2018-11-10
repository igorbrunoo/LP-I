/**
 * @file assistentetecnico.cpp
 * @author Igor Bruno Damasceno (igoor.bruuno@gmail.com)
 * @brief Implementação da classe AssistenteTecnico, derivada da classe Funcionario
 * @version 0.1
 * @date 11-09-2018
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include "assistentetecnico.h"
#include <string>

using namespace std;

/**
 * @brief Construct a new Assistente Tecnico:: Assistente Tecnico object
 * 
 * @param nome_ Recebe o nome do assistente técnico, passado para o construtor da classe Funcionario e Pessoa
 * @param idade_ Recebe a Idade do assistente técnico, passado para o construtor da classe Funcionario e Pessoa
 * @param altura_ Recebe a Altura do assistente técnico, passado para o construtor da classe Funcionario e Pessoa
 * @param matricula_ Recebe a Matrícula do assistente técnico, passado para o construtor da classe Funcionario
 * @param salario_ Recebe o Salário do assistente técnico, passado para o construtor da classe Funcionario
 * @param supervisor_ Recebe um ponteiro para o funcionario supervisor do assistente tecnico
 * @param bonusSalarial_ Recebe o bonus salarial do assistente técnico
 */
AssistenteTecnico::AssistenteTecnico(string nome_, int idade_, float altura_, string matricula_, double salario_, Funcionario *supervisor_, float bonusSalarial_):
    Funcionario(nome_, idade_, altura_, matricula_, salario_), m_supervisor(supervisor_), m_bonusSalarial(bonusSalarial_){}

/**
 * @brief Destroy the Assistente Tecnico:: Assistente Tecnico object
 * 
 */
AssistenteTecnico::~AssistenteTecnico(){}

/**
 * @brief Get the Supervisor object
 * 
 * @return Funcionario* 
 */
Funcionario * AssistenteTecnico::getSupervisor(){
    return m_supervisor;
}

/**
 * @brief Retorna o valor do bonus salarial
 * 
 * @return float 
 */
float AssistenteTecnico::getBonusSalarial(){
    return m_bonusSalarial;
}

/**
 * @brief Retorna o salário total
 * 
 * @return float 
 */
float AssistenteTecnico::getSalario(){
    return m_salario + m_bonusSalarial;
}

/**
 * @brief Sobrecarga do operador de inserção
 * 
 * @param o 
 * @param a 
 * @return ostream& 
 */
ostream &operator<<(ostream &o, AssistenteTecnico &a){
    o << "Nome: " << a.getNome() << "\n"
      << "Idade: " << a.getIdade() << "\n"
      << "Altura: " << a.getAltura() << "\n"
      << "Matrícula: " << a.getMatricula() << "\n"
      << "Salário: R$ " << a.getSalario() << "\n"
      << "Supervisor: " << (*a.getSupervisor()).getNome() << "\n"
      << "Bônus salarial: " << a.getBonusSalarial();
    return o;
}