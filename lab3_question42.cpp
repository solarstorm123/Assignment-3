#include <iostream>

using namespace std;

int main()
{
int x ,y ,power=1;
cout <<"enter the base number :";
cin>>x;
cout <<"enter the power :";
cin>>y;
int z=x;
while(y>0)
{
power=z*power;
z;
y--;

}
cout<<"the raised number is :"<<power;

return 0;
}
