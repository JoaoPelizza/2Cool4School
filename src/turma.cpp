#include "../include/turma.hpp"

void Turma::set_nome(std::string nome){
    this->nome = nome;
}

void Turma::set_professor(Professor *professor){
    this->professor = professor;
    this->professor->add_to_Turma(this);
}

void Turma::remove_professor(){
    this->professor->remove_from_turma(this);
    this->professor = NULL;
}

void Turma::set_materia(Materia *materia){
    this->materia = materia;
}

void Turma::add_aluno(Aluno *aluno){
    this->listAluno.push_back(aluno);
    aluno->add_to_turma(this);
    return;
}

Professor *Turma::get_professor(){
    return this->professor;
}

Materia *Turma::get_materia(){
    return this->materia;
}

std::list<Aluno*> Turma::get_listAluno(){
    return this->listAluno;
}

std::list<Prova*> Turma::get_listProva(){
    return this->listProva;
}

std::string Turma::get_nome(){
    return this->nome;
}

void Turma::create_prova(std::string nomeProva){
    for(auto it = this->listAluno.begin();it != this->listAluno.end();it++){
        this->add_prova(new Prova(nomeProva,(*it),this));
    }
}

void Turma::add_prova(Prova *prova){
    this->listProva.push_back(prova);
}




void Turma::marcar_presenca(){
    this->num_aulas++;
    int numAux = 0;
    std::cout << "Todos os alunos estão presentes?\n1-Sim\n2-Não\nN:";
    std::cin >> numAux;
    if(numAux == 1){
        std::cout << "Marcando presença para todos os alunos...\n";
        for(auto i = this->listPresenca.begin(); i != this->listPresenca.end();i++){
            *i++;
        }
    }
    else{
        auto j = this->listAluno.begin();
        for(auto i = this->listPresenca.begin(); j != this->listAluno.end();i++,j++){
            std::cout << (*j)->get_nome() << " Esta presente?\nN:\n";
            std::cin >> numAux;
            if(numAux == 1){
                *i++;
            }
        }
    }
}

std::list<int> Turma::get_presenca(){
    return this->listPresenca;
}

int16_t Turma::get_num_aulas(){
    return this->num_aulas;
}

void Turma::remove_aluno(){
    int num = 0;
    for(auto i = this->listAluno.begin();i!=this->listAluno.end();i++){
        std::cout << num << " : " << (*i)->get_nome();
    }
    std::cout << "Escolha 1 aluno para deletar da sala;\n" << "-1 para cancelar a ação\n" << "N:";
    std::cin >> num;
    if(num == -1){
        return;
    }
    else{
        auto i = this->listAluno.begin();
        while(num--){
            i++;
        }
        std::cout << "Aluno: " << (*i)->get_nome() << "Excluido da turma\n";
        this->listAluno.erase(i);
    }
}

Turma::Turma(std::string nome,Materia *materia){
    set_nome(nome);
    set_materia(materia);
}

void Turma::set_peso_prova(std::string nome, int16_t peso){
    for(auto it = this->listProva.begin(); it!=this->listProva.end();it++){
        if(!(*it)->get_nome().compare(nome)){
            (*it)->set_peso(peso);
        }
    }
}

void Turma::t_set_nota_aleatorio(){
    for(auto it = this->listProva.begin(); it != this->listProva.end(); it++){
        (*it)->set_nota((int)random()%11);
    }
}