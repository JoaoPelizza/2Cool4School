#ifndef T_TURMA
#define T_TURMA

#include "turma.hpp"

class T_Turma : public Turma{
    public:
        using Turma::Turma;
        unsigned short num_aulas;
        void chamada_com_presenca_aleatoria();
        void set_numero_de_aulas(unsigned short aulas);
        bool check_numero_de_aulas(unsigned short proposto);
};

#endif //T_TURMA