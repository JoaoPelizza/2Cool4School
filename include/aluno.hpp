#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>
#include <list>

class Turma;


#include "prova.hpp"
#include "professor.hpp"
#include "pessoa.hpp"

class Aluno: public Pessoa{
    public:
        Aluno(std::string nome, std::string cpf ,
                std::string responsavel, std::string num_responsavel,
                int serie, std::string nascimento);
        void set_responsavel(std::string novoResponsavel);
        std::string get_responsavel();
        void set_numero(std::string newNumero);
        std::string get_numero();
        void set_serie(int serie);
        int get_serie();
        void set_nascimento(std::string nascimento);
        std::string get_nascimento();
        void add_to_turma(Turma *turma);
        void calcular_boletim();
    private:
        std::string responsavel;
        std::string num_responsavel;
        int serie;
        std::string nascimento;
        std::list<Turma*> listTurma;

};


#endif //ALUNO_H