#ifndef _FUNCIONARIOS_H_
#define _FUNCIONARIOS_H_

#include <iostream>
#include <string>


class Funcionario {
	private:
		std::string nome;
		float salario;
	public:
		Funcionario (std::string nome_, float salario_);
		~Funcionario ();
		// ===> Getters and Setters
		std::string getNome ();
		void setNome (std::string novoNome);
		float getSalario ();
		void setSalario (float novoSalario);
		// ===> Exp Test
		bool listFuncExp ();
};


#endif