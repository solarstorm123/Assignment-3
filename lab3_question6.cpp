#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the year"<<endl;
    cout<<"year:";
    cin>>x;
    if (x%4==0)
    {
        cout<<"the year is a leap year.";
    }
    else if(x%4!=0)
    {
        cout<<"the year is not a leap year.";
    }
    else{cout<<"year entered is invalid.";}
    return 0;
}
