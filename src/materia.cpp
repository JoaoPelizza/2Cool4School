#include "../include/materia.hpp"


void Materia::set_nome(std::string nome){
    this->nome = nome;
}

Materia::Materia(std::string nome){
    set_nome(nome);
}

void Materia::generateNewcode(){
    while(true){
        this->code = "";
        int i=7;
        while(i--){
            code += std::to_string(rand()%10);
        }
        if (checkIfCodeExists(code)){
            return;
        }
        this->listCode.push_back(code);
    }
}

bool Materia::checkIfCodeExists(std::string code){
    for(auto i = this->listCode.begin();i!=this->listCode.end();i++){
        if((*i).compare(code)){
            return false;
        }
    }
    return true;
}

std::string Materia::get_nome(){
    return this->nome;
}