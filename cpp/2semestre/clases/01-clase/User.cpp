#include "User.h"
#include "permission.h"

User::printUserPermission(/* args */)
{
    for (size_t i = 0; i < countPermissions; i++)
    {
        std::cout << userPermission[i] << std::endl;
    }
    

    std::cout << "co" << std::endl;
    std::cout << "jshdsjhsd" << std::endl;

}
User::User(/* args */)
{
    name ="noname";
    email = "noemail";

    
}

User::User(string n, string e)
{
    name  = n;
    email = e;
}
