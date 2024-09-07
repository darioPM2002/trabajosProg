#include"Date.h"
#include<string>
using namespace std;

#pragma once
class Person
{
private:
    string name;
    string lastName;
    Date birthDate;
    
public:

//constructor
Person(); //contructor default

Person(string name, string lastName, Date birthDate);



};