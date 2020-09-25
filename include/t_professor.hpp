#ifndef T_PROFESSOR
#define T_PROFESSOR

#include "professor.hpp"

class T_Professor : public Professor{
    public:
        using Professor::Professor;
        void add_list_of_turmas(std::list <Turma*> listTurmaToAdd);
        void remove_random_turma();
};

#endif //T_PROFESSOR