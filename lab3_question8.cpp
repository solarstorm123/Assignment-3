#include <iostream>
using namespace std;
int main()
{
    char x;
    int y;
    cout <<"alphabet:"<<endl;
    cin>>x;
    y=static_cast<int>(x);
    if (y==65||y==69||y==73||y==79||y==85||y==97||y==101||y==105||y==111||y==117)
    {
        cout<<"the alphabet is a vowel.";
    }
    else{cout<<"it is a consonant.";}


    return 0;
}
