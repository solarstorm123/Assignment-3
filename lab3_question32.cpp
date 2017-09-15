#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,a;
    cout <<"enter a number : ";
    cin>>x;
    a=x%10;
    while (x/10>0)
    {

        x=x/10;
        x/10;

    }


    cout <<"first digit is "<<x<<" and last digit is "<<a<<endl;


    return 0;
}
