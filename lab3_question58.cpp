#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long x;
    cout<<"enter a binary number :";
    cin>>x;
    long z,num=0,a,sum=0,number;
    if(x>0)
    {
    while(x>0)
    {
        z=x%10;
        if(z==1)
        a=0;
        else if(z==0)
            a=1;
        num++;
        sum=sum+a*pow(10,num-1);
            x/=10;
    }
     if(x==0)
     {
         number=sum+pow(10,num);}
         cout<<"ones complement:"<<number;}

      else{cout<<"ones complement:1";}




    return 0;
}

