#include <iostream>
using namespace std;
int main()
{
int y;
char x;
cout<<"enter a character ."<<endl;
cout<<"character : "<<x;
cin>>x;
y=static_cast<int>(x);
if (y>64&&y<91 || y>96&&y<123)
{
    cout<<"the character entered is a alphabet.";
}
else{cout<<"the character is not an alphabet.";}
return 0;
}
