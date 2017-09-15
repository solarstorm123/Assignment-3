#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,a,e,c,d,num=0;
    cout<<"enter the number : ";
    cin>>x;
    a=x%10;
    int z=x;
    while(z/10!=0)
    {
        z=z/10;
        z/10;
        num++;
    }
    e=pow(10,num);
    c=(x/10)+z;
    d=(x%e)+(a*e);
    cout <<"the final number is "<<d<<endl;



    return 0;
}
