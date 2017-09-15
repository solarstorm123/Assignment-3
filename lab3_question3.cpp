#include <iostream>
using namespace std;
int main()
{
    float x;
    cout<<"please enter the number ."<<endl;
    cout<<"x:";
    cin>>x;
    if (x>0)
    {
        cout <<"the number is positive."<<endl;
    }
    else if(x==0)
    {
        cout<<"the number is zero."<<endl;
    }
    else {cout <<"the number is negative"<<endl;}
    return 0;
}
