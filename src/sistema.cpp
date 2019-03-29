#include "sistema.h"

Sistema::Sistema () {

}
Sistema::~Sistema () {

}
void Sistema::run () {

	int option;
	std::string add_func_to_emp;

	std::cout << "#========= !Escolha uma opção! =========#" << std::endl;
	std::cout << "(1) Adicionar Empresa\n";
	std::cout << "(2) Listar Empresas\n";
	std::cout << "(3) Adicionar Funcionario\n";
	std::cout << "(4) Listar Funcionarios de uma empresa\n";
	std::cout << "(5) Dar aumento a funcionarios\n";
	std::cout << ">>> Opção: ";
	std::cin >> option;
	if (option == 1){
		addEmpresa ();
	}
	else if (option == 2) {
		getEmpresas();
	}
	else if (option == 3){
		int op;
		std::cout << "\nA qual empresa o funcionario deve ser adicionado?\n>>> ";
		std::cin >> add_func_to_emp;
		for (auto i(0) ; i < empresa.size() ; i++){
			if (!add_func_to_emp.compare(empresa[i]->getNome())){
				empresa[i]->addFuncionario();
					do {
						std::cout << "\nAdicionar outro funcionario? (1) sim -- (2) não\n>>> ";
						std::cin >> op;
						if (op == 1)
							empresa[i]->addFuncionario();
						else
							break;
					} while (true);
			}
			else if (i == empresa.size()-1) {
				std::cout << "Empresa não encontrada!\n";
				do {
					std::cout << "\nAdicionar outro funcionario? (1) sim -- (2) não\n>>> ";
					std::cin >> op;
					if (op == 1)
						empresa[i]->addFuncionario();
					else
						break;
				} while (true);
			}
		}
		run();
	}
	else if (option == 4){
		std::cout << "\nListar funcionarios de qual empresa? \n>>> ";
		std::cin >> add_func_to_emp;
		for (auto i(0) ; i < empresa.size() ; i++){
			if (!add_func_to_emp.compare(empresa[i]->getNome())){
				empresa[i]->listarDadosFuncionarios();
			}
		}
		run();
	}
	else if (option == 5){

		std::string aumento_empresa;

		std::cout << "\nFuncionarios de qual empresa iram receber aumento?\n>>> ";
		std::cin >> aumento_empresa;

		for (auto i(0) ; i < empresa.size() ; i++){
			if (!aumento_empresa.compare(empresa[i]->getNome())){
				empresa[i]->darAumento();
			}
		}
		run();
	}
}
void Sistema::addEmpresa (){
	std::cout << "Nome da empresa" << std::endl;
	std::cout << ">>> ";
	std::cin >> nome_temporario;
	std::cout << "CNPJ da empresa" << std::endl;
	std::cout << ">>> ";
	std::cin >> cpnj_temporario;
	empresa.push_back (new Empresa (nome_temporario, cpnj_temporario));
	run();
}
void Sistema::getEmpresas () {
	std::cout << "\n\n=== Empresas ===\n";
	if (empresa.size() == 0)
		std::cout << "\n>>> Nenhuma empresa cadastrada!\n\n";
	for (auto i(0) ; i < empresa.size() ; i++){
		std::cout << "\n>>> Nome: " << empresa[i]->getNome() << std::endl;
		std::cout << ">>> CNPJ: " << empresa[i]->getCnpj() << std::endl << std::endl;
	}
	run();
}