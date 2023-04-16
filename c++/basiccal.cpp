//Programme to do basic calculations.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,sum,mul,div,diff,mod;
    cout<<" Enter the value of numbers \n";
    cin>>num1>>num2;
    sum=num1+num2;
    diff=num1-num2;
    div=num1/num2;
    mul=num1*num2;
    mod=num1%num2;
    cout<<" sum ="<<sum<<endl;
    cout<<" difference ="<<diff<<endl;
    cout<<" multiplication ="<<mul<<endl;
    cout<<" division ="<<div<<endl;
    cout<<" modolus ="<<mod<<endl;
    return 0;

}