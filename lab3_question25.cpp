#include<iostream>
using namespace std;
int main()
{
    cout<<"even numbers till 100:"<<endl;
    int a=-2;
    while(a<100)
    {
       int even;
       even=a+2;
       a+=2;
        cout<<even<<endl;
    }
    return 0;
}
