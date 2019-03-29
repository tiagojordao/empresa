#ifndef _EMPRESAS_H_
#define _EMPRESAS_H_

#include <iostream>
#include <string>
#include <vector>

#include "funcionario.h"

class Empresa {
	private:
		std::string nome;
		int cnpj;
		std::vector <Funcionario*> funcionario;
	public:
		Empresa (std::string nome_, int cnpj_);
		~Empresa ();
		std::string getNome ();
		void setNome (std::string novoNome);
		int getCnpj ();
		void setCnpj (int novoCnpj);
		void addFuncionario ();
		void listarDadosFuncionarios ();
		void darAumento();
};

#endif