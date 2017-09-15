#include <iostream>
using namespace std;
int main()
{
    int x,num=0;
    cout<<"enter the number."<<endl;
    cout<<"number : ";
    cin>>x;
    while ((x/10)!=0)
    {
        num++;
        x=x/10;
        x/10;
    }
    cout<<"number of digits :"<<num+1;

    return 0;
}
