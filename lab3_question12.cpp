#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"enter the month number."<<endl;
cout<<"month number:";
cin>>x;
if (x>=1&&x<13)
{
if(x<=7&&x%2!=0)
{cout<<"it has 31 days."<<endl;}
else if(x<=7&&x%2==0&&x!=2)
{cout<<"it has 30 days."<<endl;}
else if(x>=7&&x%2!=0)
{cout<<"it has 30 days."<<endl;}
if(x>=7&&x%2==0)
{cout<<"it has 31 days."<<endl;}
else{cout<<"it normally has 28 days and 29 days in leap years.";}
}
else {cout<<"entered month number is invalid.";}
return 0;
}
