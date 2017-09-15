#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,e;
    cout <<"please enter the marks out of 100."<<endl;
    cout<<"physics:";
    cin>>a;
    while(a>100){cout<<"invalid marks"<<endl;cout<<"re enter:";cin>>a;}
    cout<<"chemistry:";
    cin>>b;
    while(b>100){cout<<"invalid marks"<<endl;cout<<"re enter:";cin>>b;}
    cout<<"maths:";
    cin>>c;
    while(c>100){cout<<"invalid marks"<<endl;cout<<"re enter:";cin>>c;}
    cout<<"biology:";
    cin>>d;
    while(d>100){cout<<"invalid marks"<<endl;cout<<"re enter:";cin>>d;}
    cout<<"computer:";
    cin>>e;
    while(e>100){cout<<"invalid marks"<<endl;cout<<"re enter:";cin>>e;}
    float f;
    f=(a+b+c+d+e+f)/5;
    cout<<"percentage :"<<f<<endl;
    if (f>=90){cout<<"grade:A";}
    else if (f>=80){cout<<"grade:B";}
    else if (f>=70){cout<<"grade:C";}
    else if (f>=60){cout<<"grade:D";}
    else if (f>=40){cout<<"grade:E";}
    else if (f<40){cout<<"grade:F";}
    else{cout<<"the marks entered are invalid.";}
    return 0;
}
