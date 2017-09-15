#include <iostream>
using namespace std;
int main()
{

   float x,y,z;
   cout<<"please enter the numbers"<<endl;
   cout<<"x:";
   cin>>x;
   cout<<"y:";
   cin>>y;
   cout<<"z:";
   cin>>z;

   if(x>=y>=z || x>=z>=y)
   {
       cout<<"the greater number is "<<x<<endl;
   }
   else if(y>=z>=x || y>=x>=z)
   {
       cout<<"the greater number is "<<y<<endl;
   }
   else if(z>=x>=y || z>=y>=x)
   {
       cout<<"the greater number is "<<z<<endl;
   }

    return 0;

}
