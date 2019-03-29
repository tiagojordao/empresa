#include "funcionario.h"

Funcionario::Funcionario (std::string nome_, float salario_):nome(nome_), salario(salario_){

}
Funcionario::~Funcionario (){

}
std::string Funcionario::getNome (){
	return nome;
}
void Funcionario::setNome (std::string novoNome){
	nome = novoNome;
}
float Funcionario::getSalario (){
	return salario;
}
void Funcionario::setSalario (float novoSalario){
	salario = novoSalario;
}
bool listFuncExp () {
	return 0;
}