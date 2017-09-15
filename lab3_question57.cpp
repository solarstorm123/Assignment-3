#include <iostream>
using namespace std;
int main()
{
    long x;
    cout <<"enter a number :";
    cin>>x;
    cout<<"0 1 ";
    long a1=0,a2=1,a3=0;
    while (a2+a1<x)
    {
        a3=a2+a1;
        a1=a2;
        a2=a3;
        cout<<a3<<" ";
    }




    return 0;
}
