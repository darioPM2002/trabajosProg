#pragma once
#include "Object.h"
#include <iostream>
class Video: public Object
{
private:
    /* data */
public:
void print(){
    std::cout << "Soy un video" << std::endl;
};
    Video(/* args */);
    ~Video();
};

Video::Video(/* args */)
{
}

Video::~Video()
{
}
