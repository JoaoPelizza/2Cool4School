#include "../include/professor.hpp"

Professor::Professor(std::string nome,std::string cpf,std::string endereco){
    this->set_nome(nome);
    this->set_cpf(cpf);
    this->set_endereco(endereco);
}

void Professor::set_endereco(std::string endereco){
    this->endereco = endereco;
}

std::string Professor::get_endereco(){
    return this->endereco;
}

void Professor::remove_from_turma(Turma *turma){
    for(auto it = this->listTurma.begin(); it != this->listTurma.end();it++){
        if((*it).get_nome() == (*turma).get_nome()){
            (*it).remove_professor();
        }
    }
}

std::list<Turma> Professor::get_listTurma(){
    return this->listTurma;
}

void Professor::add_prova_to_turma(Turma *turma){
    
}

void Professor::add_to_Turma(Turma *turma){
    turma->set_professor(this);
    this->add_turma_to_list(turma);
}

void Professor::add_turma_to_list(Turma *turma){
    for(auto it = this->listTurma.begin(); it !=this->listTurma.end(); it++){
        if((*it).get_nome() == (*turma).get_nome()){
            std::cout << "Esse professor ja esta relacionado a essa turma\n";
            return;
        }
    }
    this->listTurma.push_back(*turma);
    std::cout << "Turma adicionada a professor \n";
}

void Professor::remove_turma_from_list(Turma *turma){
    for(auto it = this->listTurma.begin(); it !=this->listTurma.end(); it++){
        if((*it).get_nome() == (*turma).get_nome()){
            this->listTurma.erase(it);
            std::cout << "Turma remove da lista do professor\n";
            return;
        }
    }
    std::cout << "Turma não encontrada\n";
    return;
}