#include <iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"enter the number whose multiplication table is to be found"<<endl;
    cout<<"n:";
    cin>>n;
    cout<<"number until which it is to be found:";
    cin>>x;
    int i=1,product;
    while(i<=x)
    {
        product=n*i;
        i++;
    cout <<product<<endl;
    }
    return 0;
}
