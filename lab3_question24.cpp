#include <iostream>
using namespace std;
int main()
{
    int a=65;
    while(a<91&&a>64)
    {
        cout<<static_cast<char>(a++)<<endl;
    }

    return 0;
}
