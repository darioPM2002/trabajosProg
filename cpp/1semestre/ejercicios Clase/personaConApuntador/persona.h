#include <iostream>
class persona
{
private:
    persona* father;
    
    persona* mother;
    std::string name;
public:
    persona(/* args */);
    persona(std::string name, persona* fa, persona* mo);
    std::string getName();
    void printAntecesors();
};


