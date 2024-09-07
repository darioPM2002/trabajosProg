#include "Figura.h"
#include "Circulo.h"
int main()
{
    Figura *figura;
    figura = new Circulo(0, 0, "circulo", 1, 3, 10);
    figura ->getArea();
    Figura("circulo", 5);    
    return 0;
}