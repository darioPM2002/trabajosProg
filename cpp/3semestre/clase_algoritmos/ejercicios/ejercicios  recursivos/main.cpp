#include <iostream>
#include <vector>
int sumaIterativa (std::vector<int> v, int pos, int n);
int main(int argc, char const *argv[])
{
    
    int n = 10;
    std::vector<int> v(n,1);

    int resultado= sumaIterativa(v,0,n);
    std::cout << resultado << std::endl;
    /* code */
    return 0;
}

    int sumaIterativa (std::vector<int> v, int pos, int n){
     
        if (pos==n-1)
        {
          return v[pos];
        }else
        {
          return v[pos] + sumaIterativa(v,pos+1,n);
        }
    
    }
