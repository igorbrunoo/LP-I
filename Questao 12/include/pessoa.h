#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa{
	protected:
		string m_nome;
		int m_idade;
		float m_altura;

	public:
		Pessoa(string nome_, int idade_, float altura_);
		~Pessoa();

		string getNome();
		int getIdade();
		float getAltura();

		void setNome(string nome_);
		void setIdade(int idade_);
		void setAltura(float altura_);

	friend ostream& operator<<(ostream& o, const Pessoa& p);

};

#endif