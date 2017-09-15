#include <iostream>
using namespace std;
int main()
{
int x,a,b,c,d,e,f,g;
cout<<"please enter the amount."<<endl;
cout<<"amount:";
cin>>x;
a=x/2000;
b=(x%2000)/500;
c=(x%500)/100;
d=(x%100)/50;
e=(x%50)/10;
f=(x%10)/5;
g=(x%5);
if(x>=0){
cout<<"2000rupees denominations:"<<a<<endl;
cout<<"500 rupees denominations:"<<b<<endl;
cout<<"100 rupees denominations:"<<c<<endl;
cout<<"50 rupees denominations:"<<d<<endl;
cout<<"10 rupees denominations:"<<e<<endl;
cout<<"5 rupees denominations:"<<f<<endl;
cout<<"1 rupee denominations:"<<g<<endl;
}
else cout<<"the entered amount is invalid.";

return 0;
}
