#include <iostream>
using namespace std;
int main()
{
 char x;
 int y;
 cout <<"enter an alphabet."<<endl;
 cout<<"alphabet:";
 cin>>x;
 y=static_cast<int>(x);
 if (y>64&&y<91)
 {
     cout<<"entered alphabet is uppercase.";
 }
 else if (y>96&&y<123)
 {
     cout<<"entered alphabet is lowercase.";
 }
 else{cout<<"entered character is not an alphabet.";}

    return 0;
}
