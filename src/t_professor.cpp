#include "../include/t_professor.hpp"

void T_Professor::add_list_of_turmas (std::list <Turma*> listTurmaToAdd){
    for(auto it = listTurmaToAdd.begin();it!= listTurmaToAdd.end();it++){
        this->add_to_Turma((*it));
    }
    return;
}

void T_Professor::remove_random_turma(){
    int aux = (int) (random() % this->listTurma.size());
    int counter = 0;
    auto it = this->listTurma.begin();
    for(; counter<aux; it++,counter++);
    this->listTurma.remove(*it);
    
}