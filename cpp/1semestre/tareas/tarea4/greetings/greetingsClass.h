#include <iostream>

class greetingsClass
{
private:
std::string ultima_persona_saludada;
std::string ultima_persona_despedida;


public:
    //saludos 
    void saludar(std::string valor);
    void despedir(std::string valor);
    //getters
    std::string get_ultima_saludada();
    std::string get_ultima_despedida();

};


