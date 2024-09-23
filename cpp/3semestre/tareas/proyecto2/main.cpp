#include "Entrada.cpp"
#include <iostream>
#include <vector>
#include "EntradaService.cpp"
int main(int argc, char const *argv[])
{


    std::vector<Entrada> db = EntradaService<Entrada>::ObtenerDB("equipo2.csv");
    std::cout << db.size() << std::endl;
    return 0;
}
