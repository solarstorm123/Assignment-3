#include<iostream>
using namespace std;
int main()
{
    cout<<"odd numbers till 100:"<<endl;
    int a=-1;
    while(a<99)
    {
       int odd;
       odd=a+2;
       a+=2;
        cout<<odd<<endl;
    }
    return 0;
}
