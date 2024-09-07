#include "Date.h"
#include <iostream>
using namespace std;
#pragma once

class persona
{
private:
    Date birthDate;
    string first_name;
    string last_name;

public:
    persona();
    persona(Date birthDate, string first_name, string last_name);
};

