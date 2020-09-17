#ifndef TURMA_H
#define TURMA_H

#include <iostream>
#include <string>
#include <list>

#include "prova.hpp"
#include "materia.hpp"
#include "aluno.hpp"

class Professor;
class Aluno;

class Turma{
    public:
        Turma(std::string nome,Materia *materia);
        void set_professor(Professor *professor);
        void remove_professor();
        void add_aluno(Aluno *aluno);
        void remove_aluno();
        void set_nome(std::string nome);
        void set_materia(Materia *materia);

        std::string get_nome();
        Materia *get_materia();
        Professor *get_professor();
        std::list<Aluno> get_listAluno();
        std::list<Prova> get_listProva();

        void marcar_presenca();

    private:
        std::string nome;
        Materia *materia; 
        Professor *professor;
        std::list<Aluno> listAluno;
        std::list<int> listPresenca;
        std::list<Prova> listProva;
        int16_t num_aulas;
};


#endif //TURMA_H