#include <iostream>
#include "../include/escola.hpp"

void teste_turma(){
    T_Turma *turma = new T_Turma("nome",NULL);
    unsigned short aulas;

    std::cout << "quantas aulas teve?(unsigned short)\nN:";
    std::cin>> aulas;
    turma->set_numero_de_aulas(aulas);

    std::cout << "teste de numero de aulas, insira um numero e o retorno é um bool comparando ver se \n eh o mesmo valor que o numero de aulas dada\nN:";
    std::cin>>aulas;
    std::cout << turma->check_numero_de_aulas(aulas) << std::endl;

    std::cout << "gerando um numero de aulas aleatorio e comparando com o numero de aulas proposto...\n";
    turma->chamada_com_presenca_aleatoria();
    turma->check_numero_de_aulas(aulas);
    std::cout << turma->num_aulas<< std::endl;

}

void teste_professor(){
    T_Professor *professor = new T_Professor("professor","123","sim");
    std::list<Turma*> list;
    for(int aux = 0; aux<7;aux++){
        list.push_back( new Turma(std::to_string(aux),NULL) );
    }

    std::cout << list.size() << std::endl;

    professor->add_list_of_turmas(list);
    std::cout << "lista de turmas do professor: ";
    
    std::cout << professor->listTurma.size() << std::endl;
    for(auto it = professor->listTurma.begin(); it!= professor->listTurma.end(); it++){
        std::cout << (*it)->get_nome() + " ";
    }

    std::cout << "\nremovendo duas turmas aleatorias...\n" <<  std::endl;
    professor->remove_random_turma();
    professor->remove_random_turma();


    std::cout << "nova lista de turmas do professor:";
    for(auto it = professor->listTurma.begin(); it!= professor->listTurma.end(); it++){
        std::cout << (*it)->get_nome() + " ";
    }
    std::cout << std::endl;

}

int main(void){

    srand(time(NULL));

    

    return 0;
}

void create_bs(){
    
    Coordenador *tavares = new Coordenador("Tavaras","12345678987","rua 123 numero abc","5547963258741");
    
    Professor *rosso = new Professor("rosso","0123654789","av ali do lado numero 5");
    Professor *karina = new Professor("karina","6519873125","av ali do lado numero 4");
    Professor *carla = new Professor("carla","789561326","av ali do lado numero 3");
    Professor *rebeca = new Professor("rebeca","6469848417","av ali do lado numero 2");
    
    Materia *BAN = new Materia("Banco de dados 1");
    Materia *SOFT = new Materia("Engenharia de software");
    Materia *OMOG = new Materia("Modelagem geometrica");
    Materia *MDI = new Materia("Matematica Discreta");

    Turma *turmaBAN = new Turma("BAN001",BAN);
    Turma *turmaSOFT = new Turma("SOFT002",SOFT);
    Turma *turmaOMOG = new Turma("OMOG003",OMOG);
    Turma *turmaMDI = new Turma("MDI004",MDI);

    turmaBAN->set_professor(carla);
    turmaSOFT->set_professor(rebeca);
    turmaOMOG->set_professor(rosso);
    turmaMDI->set_professor(karina);

    Aluno *joaozinho = new Aluno("joaozinho","123","a mae dele", "474747", 7,"1/11/1998");
    Aluno *mariazinha = new Aluno("mariazinha","123","a mae dele", "474747", 5,"1/11/1993");
    Aluno *rodolfinho = new Aluno("rodolfinho","123","a mae dele", "474747", 4,"1/11/1994");
    Aluno *ruanzinho = new Aluno("ruanzinho","123","a mae dele", "474747", 6,"1/11/1995");
    Aluno *ricardinho = new Aluno("ricardinho","123","a mae dele", "474747", 7,"1/11/1996");

    turmaBAN->add_aluno(mariazinha);
    turmaBAN->add_aluno(rodolfinho);
    turmaBAN->add_aluno(ruanzinho);
    turmaBAN->add_aluno(ricardinho);

    turmaSOFT->add_aluno(joaozinho);
    turmaSOFT->add_aluno(rodolfinho);
    turmaSOFT->add_aluno(ruanzinho);
    turmaSOFT->add_aluno(ricardinho);

    turmaOMOG->add_aluno(joaozinho);
    turmaOMOG->add_aluno(mariazinha);
    turmaOMOG->add_aluno(ruanzinho);
    turmaOMOG->add_aluno(ricardinho);

    turmaMDI->add_aluno(joaozinho);
    turmaMDI->add_aluno(mariazinha);
    turmaMDI->add_aluno(rodolfinho);
    turmaMDI->add_aluno(ricardinho);

    turmaBAN->create_prova("P1");
    turmaSOFT->create_prova("P1");
    turmaOMOG->create_prova("P1");
    turmaMDI->create_prova("P1");

    turmaBAN->set_peso_prova("P1",1);
    turmaSOFT->set_peso_prova("P1",1);
    turmaOMOG->set_peso_prova("P1",1);
    turmaMDI->set_peso_prova("P1",1);

    turmaBAN->t_set_nota_aleatorio();
    turmaSOFT->t_set_nota_aleatorio();
    turmaOMOG->t_set_nota_aleatorio();
    turmaMDI->t_set_nota_aleatorio();

    turmaBAN->marcar_presenca();
    turmaSOFT->marcar_presenca();
    turmaOMOG->marcar_presenca();
    turmaMDI->marcar_presenca();

    joaozinho->calcular_boletim();

    

}