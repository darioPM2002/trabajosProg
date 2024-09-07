#include "personaClass.h"

int main()
{
    
    personaClass persona;
    persona.setname("Dario");
    persona.setaPaterno("Pena");
    persona.setaMaterno("Mariano");
    persona.settelefono("951249042");
    persona.setdireccion("CDMX");
    persona.setrfc("PEMD0");
    persona.setcurp("PEMD020617HOCX");

    std::cout << " nombre: "<< persona.getname()<< " apellido paterno: "<< persona.getaPaterno()<< " apellido materno: "<< persona.getaMaterno()<< " direccion: "<< persona.getdireccion()<< " telefono: "<< persona.gettelefono()<< " curp: "<< persona.getcurp()<< " rfc: "<< persona.getrfc()<< std::endl;
    return 0;
}
