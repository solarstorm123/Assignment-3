#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter n:";
    cin>>n;
    if(n>0)
    {
    for(int i=1;i<=n;i+=2)
    {
        sum+=i;
    }
    cout<<"sum:"<<sum;
    }
    else cout<<"the number n is invalid.";
    return 0;
}
