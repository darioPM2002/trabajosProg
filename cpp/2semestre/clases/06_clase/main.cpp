#include "ListManager.h"
#include "Video.h"

#include "Object.h"
int main()
{
    ListManager netflix;
    Video v;
    netflix.add(&v);

    // &v es lo mismo que hacer:
    // Video *v;
    // v = new Video();
    //netflix.add(v);
    /* code */
    netflix.printAll();
    return 0;
}
