#include <iostream>
using namespace std;
int main()
{
    float x;
    cout<<"please enter your basic salary."<<endl;
    cout<<"basic salary :";
    cin>>x;
    if (x<=10000)
    {
        cout<<"HRA:"<<.2*x<<endl;
        cout<<"DA:"<<.8*x<<endl;
        cout<<"gross salary:"<<x+(.2*x)+(.8*x)<<endl;
    }
    else if (x<=20000)
    {
        cout<<"HRA:"<<.25*x<<endl;
        cout<<"DA:"<<.9*x<<endl;
        cout<<"gross salary:"<<x+(.25*x)+(.9*x)<<endl;
    }
    else if (x>20000)
    {
        cout<<"HRA:"<<.3*x<<endl;
        cout<<"DA:"<<.95*x<<endl;
        cout<<"gross salary:"<<x+(.3*x)+(.95*x)<<endl;
    }



    return 0;
}
