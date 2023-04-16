//Programme to chenck maximy=um of three numbers.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<" Enter three numbers \n";
    cin>>num1>>num2>>num3;
    if(num1>num2)
    {
        if(num1>num3)
        {
            cout<<"Number one is greater "<<num1<<endl;
        }
        else
        {
            cout<<"Number three is greater "<<num3<<endl;
        }
    }
    else 
    {
        if(num2>num3)
        {
            cout<<"Number two is greater "<<num2<<endl;
        }
        else
        {
            cout<<" number three is greater "<<num3<<endl;
        }
    }
    return 0;

}