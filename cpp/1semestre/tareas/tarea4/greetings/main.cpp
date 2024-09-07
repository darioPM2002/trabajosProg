#include "greetingsClass.h"

int main( )
{
    greetingsClass saludos;
    saludos.saludar("Juan");
    saludos.despedir("Roberto");
    

    //std::cout << "Ultima persona saludada: " <<saludos.get_ultima_saludada()<< "Ultima persona despedida: "<<saludos.get_ultima_despedida()<<   std::endl;
    return 0;
}
