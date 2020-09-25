#include "../include/t_turma.hpp"


void T_Turma::chamada_com_presenca_aleatoria(){
    this->set_numero_de_aulas((int)random()%21);
}

void T_Turma::set_numero_de_aulas(unsigned short aulas){
    this->num_aulas = aulas;
    return;
}

bool T_Turma::check_numero_de_aulas(unsigned short proposto){
    if(this->num_aulas == proposto){
        return true;
    }
    return false;
}