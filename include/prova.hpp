#ifndef PROVA_H
#define PROVA_H

#include <iostream>
#include <string>

class Turma;
class Aluno;

class Prova{
    public:
        Prova(std::string nome,Aluno *aluno,Turma *turma);
        void set_nome(std::string nome);
        void set_nota(int nota);
        void set_peso(int peso);
        Turma *get_turma();
        Aluno *get_aluno();
        void set_turma(Turma *turma);
        void set_aluno(Aluno *aluno);


        std::string get_nome();
        int get_nota();
        int get_peso();
    private:
        std::string nome;
        int nota;
        int peso;
        Turma *turma;
        Aluno *aluno;
};


#endif //PROVA_H