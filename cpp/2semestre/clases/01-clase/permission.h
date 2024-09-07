#include <string>
using namespace std;
class Permission
{
private:
   string name; 
   string description; 
public:
    permission();
    permission(string b,string d);
};

permission::permission(/* args */)
{
    name = "permission";
    description = "no-value"; 
}

permission::permission(string b,string d)
{
    name = b; 
    description = d; 
}
