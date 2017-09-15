#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"enter a number : ";
cin>>x;
int i=x ,factorial=1;
while(i>=1)
{
factorial=factorial*i;
i--;
}
cout<<"factorial is :"<<factorial<<endl;
return 0;
}
