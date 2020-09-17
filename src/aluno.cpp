#include "../include/aluno.hpp"

Aluno::Aluno(std::string nome, std::string cpf, std::string resposavel, std::string num_resposavel, int serie, std::string nascimento){
    set_nome(nome);
    set_cpf(cpf);
    set_responsavel(resposavel);
    set_numero(num_responsavel);
    set_serie(serie);
    set_nascimento(nascimento);
}

void Aluno::set_responsavel(std::string responsavel){
    this->responsavel = responsavel;
}

void Aluno::set_nascimento(std::string nascimento){
    this->nascimento = nascimento;
}

void Aluno::set_numero(std::string numero){
    this->num_responsavel = numero;
}

void Aluno::set_serie(int serie){
    this->serie = serie;
}

void Aluno::add_to_turma(Turma *turma){
    this->listTurma.push_back(*turma);
}

void Aluno::calcular_boletim(){
    this->
}