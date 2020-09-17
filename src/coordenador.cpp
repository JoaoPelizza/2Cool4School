#include "../include/coordenador.hpp"

Coordenador::Coordenador(std::string nome, std::string cpf, std::string endereco, std::string num_pessoal){
    this->set_nome(nome);
    this->set_cpf(cpf);
    this->set_endereco(endereco);
    this->set_num_pessoal(num_pessoal);
}

void Coordenador::set_num_pessoal(std::string num_pessoal){
    this->num_pessoal = num_pessoal;
}
void Coordenador::set_endereco(std::string endereco){
    this->endereco = endereco;
}

std::string Coordenador::get_num_pessoa(){
    return this->num_pessoal;
}

std::string Coordenador::get_endereco(){
    return this->endereco;
}

