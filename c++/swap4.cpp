//Program to swap 4 numbers.
#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    cout<<"d=";
    cin>>d;

    a=a+b+c+d;
    b=a-(b+c+d);
    c=a-(b+c+d);
    d=a-(b+c+d);
    a=a-(b+c+d);
    cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl<<"d="<<d;

    return 0;
}