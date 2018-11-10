/**
 * @file assistenteadministrativo.cpp
 * @author Igor Bruno Damasceno (igoor.bruuno@gmail.com)
 * @brief Implementa a classe AssistenteAdministrativo
 * @version 0.1
 * @date 11-09-2018
 * 
 * @copyright Copyright (c) 2018
 * 
 */

#include "assistenteadministrativo.h"

using namespace std;

/**
 * @brief Construct a new Assistente Administrativo:: Assistente Administrativo object
 * 
 * @param nome_ Recebe o nome do assistente técnico, passado para o construtor da classe Funcionario e Pessoa
 * @param idade_ Recebe a Idade do assistente técnico, passado para o construtor da classe Funcionario e Pessoa
 * @param altura_ Recebe a Altura do assistente técnico, passado para o construtor da classe Funcionario e Pessoa
 * @param matricula_ Recebe a Matrícula do assistente técnico, passado para o construtor da classe Funcionario
 * @param salario_ Recebe o Salário do assistente técnico, passado para o construtor da classe Funcionario
 * @param turno_ Recebe uma string que representa o turno do assistente administrativo
 * @param participacao_ Recebe float que representa a participacao
 */
AssistenteAdministrativo::AssistenteAdministrativo(string nome_, int idade_, float altura_, string matricula_, double salario_, string turno_, float participacao_):
    Funcionario(nome_, idade_, altura_, matricula_, salario_), m_turno(turno_), m_participacao(participacao_) {}

/**
 * @brief Destroy the Assistente Administrativo:: Assistente Administrativo object
 * 
 */
AssistenteAdministrativo::~AssistenteAdministrativo(){}

/**
 * @brief Retorna o turno
 * 
 * @return string 
 */
string AssistenteAdministrativo::getTurno(){
    return m_turno;
}

/**
 * @brief Get the Participacao object
 * 
 * @return float 
 */
float AssistenteAdministrativo::getParticipacao(){
    return m_participacao;
}

/**
 * @brief Sobrecarga do operador de inserção
 * 
 * @param o 
 * @param a 
 * @return ostream& 
 */
ostream &operator<<(ostream &o, AssistenteAdministrativo &a){
    o << "Nome: " << a.getNome() << "\n"
      << "Idade: " << a.getIdade() << "\n"
      << "Altura: " << a.getAltura() << "\n"
      << "Matrícula: " << a.getMatricula() << "\n"
      << "Salário: R$ " << a.getSalario() << "\n"
      << "Turno: " << a.getTurno() << "\n"
      << "Participação: " << a.getParticipacao();
    return o;
}