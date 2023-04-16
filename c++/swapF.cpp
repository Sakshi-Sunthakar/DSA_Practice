//Program to swap the value of  2 integer.
#include<iostream>

using namespace std;

int swap(int a,int b);
int swapt(int a,int b);
//int a,b;
int main()

{
    int a,b,ua,ub;
    cout<<" Enter the value of two numbers \n";
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    

    swap(a,b);
    
    
    return 0;

}
int swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    swapt(a,b);

    return a;
    return b;
    
}
int swapt(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;


    return 0;
}