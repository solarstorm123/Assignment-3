#include <iostream>
using namespace std;
int main()
{
   float x;
   cout<<"please enter the units consumed."<<endl;
   cout<<"units:";
   cin>>x;
   if(x<=50)
   {
       cout<<"amount to be paid:"<<(.5*x)*(1+.2)<<endl;
   }
   else if(x<=150)
   {
       cout<<"amount to be paid:"<<(.75*x)*(1+.2)<<endl;
   }
   else if(x<=250)
   {
       cout<<"amount to be paid:"<<(1.2*x)*(1+.2)<<endl;
   }
   else if(x>250)
   {
       cout<<"amount to be paid:"<<(1.5*x)*(1+.2)<<endl;
   }


    return 0;
}
