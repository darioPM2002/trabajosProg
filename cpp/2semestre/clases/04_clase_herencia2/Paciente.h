#include "Persona.h"
#include <iostream>
class Paciente: public Persona
{
private:
    /* data */

protected:
int id_paciente;
 
public:
    Paciente(std::string n, int p, std::string a, std::string b, int idP ): Persona(n,p,a,b), id_paciente(idP)
    {};
    Paciente();
};
