#include <iostream>
using  namespace std;
int main()
{
    char x;
    cout <<"enter the day number."<<endl;
    cout<<"day number:";
    cin>>x;
    switch(x)
    {
    case '1':
        cout<<"monday"<<endl;
        break;
    case '2':
        cout<<"tuesday"<<endl;
        break;
         case '3':
        cout<<"wednesday"<<endl;
        break;
         case '4':
        cout<<"thursday"<<endl;
        break;
         case '5':
        cout<<"friday"<<endl;
        break;
         case '6':
        cout<<"saturday"<<endl;
        break;
         case '7':
        cout<<"sunday";
        break;
         default:
            cout<<"day number is invalid";
    }

    return 0;
}
