#ifndef TURMA_H
#define TURMA_H

#include <iostream>
#include <string>
#include <list>
#include <random>

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
        void create_prova(std::string nomeProva);
        void add_prova(Prova *prova);
        void remove_aluno();
        void set_nome(std::string nome);
        void set_materia(Materia *materia);
        void set_peso_prova(std::string nome, int16_t peso);

        std::string get_nome();
        Materia *get_materia();
        Professor *get_professor();
        std::list<Aluno*> get_listAluno();
        std::list<Prova*> get_listProva();

        void marcar_presenca();
        std::list<int> get_presenca();
        int16_t get_num_aulas();

        void t_set_nota_aleatorio();

    private:
        std::string nome;
        Materia *materia; 
        Professor *professor;
        std::list<Aluno*> listAluno;
        std::list<int> listPresenca;
        std::list<Prova*> listProva;
        int16_t num_aulas;
};


#endif //TURMA_H