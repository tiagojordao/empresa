#include "empresa.h"

Empresa::Empresa (std::string nome_, int cnpj_):nome(nome_), cnpj(cnpj_) {

}

Empresa::~Empresa () {

}

std::string Empresa::getNome (){
	return nome;
}
void Empresa::setNome (std::string novoNome){
	nome = novoNome;
}
int Empresa::getCnpj (){
	return cnpj;
}
void Empresa::setCnpj (int novoCnpj){
	cnpj = novoCnpj;
}
void Empresa::addFuncionario () {

	std::string nome_temporario;
	float salario_temporario;
	bool teste_funcionario = false;

	std::cout << std::endl << "!======== Adicionar Funcionario ========!" << std::endl;
	std::cout << std::endl << ">>> Nome do Funcionario: ";
	std::cin >> nome_temporario;
	std::cout << ">>> Salario: ";
	std::cin >> salario_temporario;

	for (auto i(0) ; i < funcionario.size() ; i++){
		if (!nome_temporario.compare(funcionario[i]->getNome())){
			teste_funcionario = true;
			std::cout << "Funcionario já cadastrado!\n\n";
			break;
		}
	}
	if (!teste_funcionario){
		funcionario.push_back (new Funcionario(nome_temporario, salario_temporario));
	}
}
void Empresa::listarDadosFuncionarios () {
	std::cout << "=== Empresa: " << nome << " ===\n";
	for (auto i(0) ; i < funcionario.size() ; i++){
		std::cout << "\nNome: " << funcionario[i]->getNome() << ".\n";
		std::cout << "Salario: " << funcionario[i]->getSalario() << ".\n\n";
	}
}
void Empresa::darAumento () {

	float porcentagem;

	std::cout << "\n=== " << nome << " ===\n";
	std::cout << "Aumento concedido\n>>> ";
	std::cin >> porcentagem;

	for (auto i(0) ; i < funcionario.size() ; i++){
		funcionario[i]->setSalario(funcionario[i]->getSalario() + ((funcionario[i]->getSalario()/100) * porcentagem));
	}
}