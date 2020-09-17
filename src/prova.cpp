#include "../include/prova.hpp"

void Prova::set_nome(std::string nome){
    this->nome = nome;
}

std::string Prova::get_nome(){
    return this->nome;
}
int Prova::get_nota(){
    return this->nota;
}
int Prova::get_peso(){
    return this->peso;
}
Turma *Prova::get_turma(){
    return this->turma;
}
Aluno *Prova::get_aluno(){
    return this->aluno;
}
void Prova::set_aluno(Aluno *aluno){
    this->aluno = aluno;
}
void Prova::set_nota(int nota){
    this->nota = nota;
}

void Prova::set_peso(int peso){
    this->peso = peso;
}

void Prova::set_turma(Turma *turma){
    this->turma = turma;
}

Prova::Prova(std::string nome,Aluno *aluno,Turma *turma){
    set_nome(nome);
    set_aluno(aluno);
    set_turma(turma);
    set_nota(-1);
    set_peso(0);
}