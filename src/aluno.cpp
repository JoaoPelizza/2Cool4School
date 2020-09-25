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
    this->listTurma.push_back(turma);
}

void Aluno::calcular_boletim(){
    int media = 0;
    int qt_provas = 0;
    int num_presenca = 0;
    int counter_for_presenca = 0;
    std::string aux = ("Aluno: " + this->get_nome() + "\n\n");
    for(auto it = this->listTurma.begin() ; it != this->listTurma.end() ; it++, counter_for_presenca++){
        auto prova = (*it)->get_listProva();
        
        for(auto jt = prova.begin(); jt!= prova.end(); jt++){
            if(!(*jt)->get_aluno()->get_nome().compare(this->get_nome())){
                std::cout << (*jt)->get_nota();
                media = (*jt)->get_nota() * ((*jt)->get_peso());
                qt_provas++;
            }
        }
        
        aux += ("Materia: " + (*it)->get_materia()->get_nome() + '\t');
        aux += ("Professor(a): " + (*it)->get_professor()->get_nome() + '\n');
        aux += ("Media: " + std::to_string(media) + "    Numero de provas: " + std::to_string(qt_provas) + '\n');
        for(auto jt = (*it)->get_presenca().begin(); jt!=(*it)->get_presenca().end();jt++){
            num_presenca = (*jt);
        }
        aux += ("Faltas: " + std::to_string(num_presenca) + "/" + std::to_string((*it)->get_num_aulas()) + "\n\n");
        qt_provas = 0;
        media = 0;
    }
    std::cout << aux << std::endl;
}