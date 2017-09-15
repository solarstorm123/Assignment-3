#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter the sides of the triangle."<<endl;
cout<<"side 1:";
cin>>a;
cout<<"side 2:";
cin>>b;
cout<<"side 3:";
cin>>c;
if(a+b>c&&b+c>a&&c+a>b)
{
if (a!=b&&b!=c&&c!=a)
{cout<<"the triangle is a scalene triangle."<<endl;}
else if(a==b&&a==c&&c==b)
{cout<<"the triangle is an equilateral triangle.";}
else{cout<<"the triangle is an isosceles triangle.";}
}
else{cout<<"the sides entered do not form a triangle.";}
return 0;
}
