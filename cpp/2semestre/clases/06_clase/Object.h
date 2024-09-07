#pragma once
class Object
{
private:
    /* data */
public:
    virtual void print() = 0; //Es para que todos los hijos tengan esta 
    //implementacion en la herencia, y el = 0 obliga a que los hijos hagan la implementacion
    //en caso que no hagan la implementacion no deja compilar
    Object(/* args */);
    
};

