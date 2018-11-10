#include <iostream>
#include <string>

#include "pessoa.h"

Pessoa::Pessoa(string nome_, int idade_, float altura_):m_nome(nome_), m_idade(idade_), m_altura(altura_){}

Pessoa::~Pessoa(){}

string Pessoa::getNome(){
	return m_nome;
}

int Pessoa::getIdade(){
	return m_idade;
}

float Pessoa::getAltura(){
	return m_altura;
}

void Pessoa::setNome(string nome_){
	m_nome = nome_;
}

void Pessoa::setIdade(int idade_){
	m_idade = idade_;
}

void Pessoa::setAltura(float altura_){
	m_altura = altura_;
}

ostream& operator<<(ostream& o, const Pessoa& p){  
    o << p.m_nome << ", " << p.m_idade << " anos, " << p.m_altura << " metros.";  
    return o;
}