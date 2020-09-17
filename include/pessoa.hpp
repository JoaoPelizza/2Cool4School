#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

class Pessoa{
    public:
        std::string get_nome();
        void set_nome(std::string nome);
        void set_login_passwd(std::string passwd);
        std::string get_login_passwd();
        std::string get_cpf();
        void set_cpf(std::string cpf);

    private:
        std::string nome;
        std::string login_passwd;
        std::string cpf;
};

#endif //PESSOA_H