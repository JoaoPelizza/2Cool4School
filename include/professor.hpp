#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
#include <string>
#include <list>


#include "turma.hpp"
#include "pessoa.hpp"

class Turma;

class Professor: public Pessoa{
    public:
        Professor(std::string nome,std::string cpf,std::string endereco);
        void set_endereco(std::string endereco);
        std::string get_endereco();
        void remove_from_turma(Turma *turma);
        void add_prova_to_turma(Turma *turma);
        void add_to_Turma(Turma *turma);
        void add_turma_to_list(Turma *turma);
        void remove_turma_from_list(Turma *turma);
        std::list<Turma*> get_listTurma();
        std::list<Turma*> listTurma;
    private:
        std::string endereco;
        
};


#endif //PROFESSOR_H