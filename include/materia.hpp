#ifndef MATERIA_H
#define MATERIA_H

#include <iostream>
#include <string>
#include <random>
#include <list>

class Turma;

class Materia{
    public:
        Materia(std::string nome);
        std::string get_nome();
        std::string get_code();
        void set_nome(std::string nome);
    private:
        std::string nome;
        std::string code;
        std::list<std::string> listCode;
        void generateNewcode();
        bool checkIfCodeExists(std::string code);
};


#endif //MATERIA_H