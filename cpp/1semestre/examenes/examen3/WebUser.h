#include <iostream>

#pragma once
class WebUser
{
private:
std::string usrName;    
std::string usrPWD;
std::string usrType;

public:
    WebUser();
    WebUser(std::string usrName_user, std::string usrPWD_user, std::string usrType_user);
    std::string get_usrName();
    std::string get_usrPWD ();
    std::string get_usrType();
};
