#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout <<"enter the angles in degrees."<<endl;
cout<<"angle 1:";
cin>>a;
cout<<"angle 2:";
cin>>b;
cout<<"angle 3:";
cin>>c;
if(a+b+c==180)
{cout<<"the triangle is valid.";}
else{cout<<"the triangle is invalid.";}


return 0;
}
