#include <iostream>
using namespace std;
int main()
{
    int x;
    char exeAgain='n';
    cout<<"please enter the number."<<endl;
    cout<<"x:";
    cin>>x;
    if (x>=0 && x%2==0)
    {
        cout<<"the number is even.";
    }
    else if (x<0)
    {
        cout<<"the number is invalid.";
    }
    else {cout <<"the number is odd."<<endl;}


    return 0;
}
