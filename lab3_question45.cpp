#include <iostream>
using namespace std;
int main()
{
int x, y;
cout <<"enter a numbers."<<endl;
cout<<"first number :";
cin>>x;
cout<<"second number :";
cin>>y;
int i=x;
while (i>=0)
{
   i=y%i;
   y=x-i;
}
cout<<"hcf is : "<<i<<endl;



return 0;
}
