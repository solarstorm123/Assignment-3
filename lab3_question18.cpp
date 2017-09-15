#include <iostream>
using namespace std;
int main()
{
float a,b;
cout<<"sales price:";
cin>>a;
cout<<"cost price:";
cin>>b;
if (a>b)
{cout<<"the profit is of "<<a-b<<" rupees and "<<((a-b)/b)*100<<" percentage.";}
else if(a<b)
{cout<<"the loss is of "<<b-a<<" rupees and "<<((b-a)/b)*100<<" percentage.";}
else{cout<<"there is no net profit or loss.";}
return 0;
}
