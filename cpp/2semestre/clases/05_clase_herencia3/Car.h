#pragma onec
#include <iostream>
class Car
{
protected:

    std::string model;
public:
    Car(/* args */): model("No model") {};
    Car(std::string m): model(m){};

};
