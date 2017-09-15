#include <iostream>
using namespace std;
int main()
{
    char x;
    int y;
    cout<<"character:";
    cin>>x;
    y=static_cast<int>(x);
    if(y>64&&y<90||y>96&&y<123)
    {
        cout<<"character entered is alphabet.";
    }
    else if(y>31&&y<48||y>57&&y<65||y>90&&y<97||y>122&&y<127)
    {
        cout<<"character entered is a special character.";
    }
    else if(y>47&&y<58)
    {
        cout<<"character entered is a number.";
    }


    return 0;
}
