#include <iostream>
using namespace std;
int main()
{
    int x,a;
    cout<<"enter the number : ";
    cin>>x;
    a=x%10;
    while(x/10>0)
    {
        x=x/10;
        x/10;
    }
    cout<<"sum of the first and last digit is "<<x+a<<endl;



    return 0;
}
