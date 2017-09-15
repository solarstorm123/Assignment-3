#include <iostream>
using namespace std;
int main()
{
int x ,i=1;
cout<<"enter a number :";
cin>>x;
cout <<"factors are :";
while (i<=x )
{
if(x%i==0){
cout << i<<",";
}
i++;



}




return 0;
}
