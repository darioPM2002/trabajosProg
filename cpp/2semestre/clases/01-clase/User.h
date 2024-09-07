#pragma once
#include<string>
#include "Permission.h"
using namespace std;

class User
{
private:
    /* data */
    string name;
    string email;
    Permission userPermission[5];
    int countPermissions;
    friend class UserManager; //Permite a la calse amiga accedera los atributos privados

public:
    void printUserPermission();
    User();
    User(string n, string e);
    st dsd;
};

