#include <iostream>

using namespace std;

int main()
{
        int len,i;
        string bin,twos;
        bool firstone=false;

        cout<<"ENTER BINARY NUMBER: ";
        cin>>bin;

        len=bin.length();
        twos.resize(len);

        for( i=(len-1) ; i>=0 ; i-- )
        {
                if(firstone==false)
               {
                        if(bin[i]=='0')
                        {
                                twos[i]='0';
                        }
                        else
                        {
                                twos[i]='1';
                                firstone=true;
                         }
                }
                else
                {
                         if(bin[i]=='0')
                         {
                                 twos[i]='1';
                         }
                         else
                         {
                                 twos[i]='0';
                          }
               }
        }

        cout<<"\nTWOS COMPLEMENT: "<<twos;

        return 0;
}
