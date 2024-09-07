#include "persona.h"

    persona::persona(/* args */){
        
        name="";
        father =0;// 0 es valor nulo
        mother = 0;// 0 es valor nulo
    };
    persona::persona(std::string na, persona* fa, persona* mo){
        
        //this hacer referencia al objeto en el que estamos
        this->getName();
        name=na;
        father =fa;
        mother = mo;
    };
    std::string persona::getName(){
        return name;
    };
    void persona::printAntecesors(){
        persona * temporal= this;
        while (temporal->father != 0)
        {
            std::cout << temporal->getName() << std::endl;
            temporal = temporal->father;
        }
        std::cout << temporal->getName() << std::endl;
        
    };