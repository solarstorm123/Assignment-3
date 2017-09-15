#include <iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"please enter the numbers"<<endl;
    cout<<"x = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    if(x>y)
    {
        cout<<"the greater number is "<<x<<endl;
    }
    else if(y>x)
    {
        cout<<"the greater number is "<<y<<endl;
    }
    else{cout<<"the numbers are equal."<<endl;}
    return 0;

    }
