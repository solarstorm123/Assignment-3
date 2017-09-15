#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"enter the number :";
cin>>x;
int z=x,product=1;
while(z/10!=0)
{
int digit=z%10;
z/=10;
product=product*digit;
}
cout <<"product :"<<product*z<<endl;
return 0;
}
