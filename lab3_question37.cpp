#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int x;
cout <<"enter a number :";
cin>>x;

int z=x ,num=0,reverse=0 ,num2=0 ,digit1 ,digit2;

while(z/10!=0)
{
digit1=z%10;
z/=10;
num++;
}

int r=x;

while(r/10!=0)
{
digit2=r%10;
num2++;
reverse=reverse+digit2*pow(10,num-(num2-1));
r/=10;
}

cout<<"reversed number is :"<<reverse+z<<endl;


return 0;
}
