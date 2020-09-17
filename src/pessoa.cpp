#include "../include/pessoa.hpp"

std::string Pessoa::get_nome(){
    return this->nome;
}

std::string Pessoa::get_cpf(){
    return this->cpf;
}

std::string Pessoa::get_login_passwd(){
    return this->login_passwd;
}

void Pessoa::set_cpf(std::string cpf){
    this->cpf = cpf;
}
void Pessoa::set_nome(std::string nome){
    this->nome = nome;
}
void Pessoa::set_login_passwd(std::string passwd){
    this->login_passwd = passwd;
}