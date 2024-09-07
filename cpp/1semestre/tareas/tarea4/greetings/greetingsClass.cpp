#include "greetingsClass.h"


void  greetingsClass::saludar(std::string valor){
    ultima_persona_saludada =valor;
    std::cout << "Hola " << valor<<", espero que te encuentres muy bien"<< std::endl;
};
void  greetingsClass::despedir(std::string valor){
    ultima_persona_despedida =valor;
    std::cout << "Adios " << valor<<", espero que te vaya muy bien"<< std::endl;
    
};

std::string  greetingsClass::get_ultima_saludada(){
    return ultima_persona_saludada;
};


std::string  greetingsClass::get_ultima_despedida(){
    return ultima_persona_despedida;
};