#ifndef COORDENADOR_H
#define COORDENADOR_H

#include "pessoa.hpp"
#include "materia.hpp"
#include "professor.hpp"
#include "aluno.hpp"
#include "turma.hpp"



class Coordenador : public Pessoa{
    public:
        Coordenador(std::string nome, std::string cpf, std::string endereco, std::string num_pessoal);
        std::string get_num_pessoa();
        std::string get_endereco();
        void set_num_pessoal(std::string nome);
        void set_endereco(std::string endereco);

        void register_new_Aluno(std::string nome, std::string cpf ,
                std::string responsavel, std::string num_responsavel,
                int serie, std::string nascimento);

        void register_new_Professor(std::string nome,std::string cpf,std::string endereco);

        void register_new_Materia(std::string nome);

        void register_new_Turma(std::string nome,Materia *materia);

        void register_new_Coordenador(std::string nome, std::string cpf, std::string endereco, std::string num_pessoal);
    private:
        std::string num_pessoal;
        std::string endereco;
};

#endif // COORDENADOR_H