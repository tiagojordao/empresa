#ifndef _SISTEMA_H_
#define _SISTEMA_H_

#include <iostream>
#include <vector>
#include <string>

#include "empresa.h"

class Sistema {
	private:
		std::vector<Empresa*> empresa;
		std::string nome_temporario;
		int cpnj_temporario;
	public:
		static int quantidade_funcionarios;
		Sistema ();
		~Sistema();
		void run ();
		void addEmpresa ();
		void getEmpresas ();
};

#endif