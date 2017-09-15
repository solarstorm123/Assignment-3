#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a,b,c;
cout<<"enter the coefficients of x^2 ,x ,and the constant."<<endl;
cout<<"coefficient of x^2 :";
cin>>a;
cout<<"coefficient of x :";
cin>>b;
cout<<"constant :";
cin>>c;
float d=(b*b-4*a*c);
if (d>=0)
{
cout<<"the roots are as following "<<endl;
cout<<"x1 :"<<((-b)+sqrt(d))/(2*a)<<endl;
cout<<"x2 :"<<((-b)-sqrt(d))/(2*a)<<endl;
}
else 
{
cout<<"the roots are as following "<<endl;
cout<<"x1 :"<<(-b)<<"+i"<<sqrt(-d)<<"/"<<(2*a)<<endl;
cout<<"x2 :"<<(-b)<<"-i"<<sqrt(-d)<<"/"<<(2*a)<<endl;
}

return 0;
}
