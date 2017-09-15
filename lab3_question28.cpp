#include <iostream>
using namespace std;
int main()
{
    int sum=0 ,n;
    cout<<"enter n :";
    cin>>n;
    for(int i=2;i<=n;i+=2)
    {
        sum+=i;
    }
    cout<<"sum :"<<sum;
    return 0;
}
