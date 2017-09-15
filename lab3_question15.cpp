#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"side 1:";
cin>>a;
cout<<"side 2:";
cin>>b;
cout<<"side 3:";
cin>>c;
if(a+b>c&&b+c>a&&a+c>b)
{cout<<"the traingle is valid.";}
else{cout<<"the triangle is not valid.";}


return 0;
}
