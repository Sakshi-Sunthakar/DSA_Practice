//Program to illustrate simple calculator.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num1,num2;
    char op;
    cout<<" Enter the expression  \n ";
    cout<<" Enter two numbers \n ";
    cin>>num1>>num2;
    cout<<" Enter the opertor \n";
    cin>>op;
    switch(op)
    {
        case '+':
            cout<<num1+num2<<endl;
            break;
        case '-':
            cout<<num1-num2<<endl;
            break;
        case '*':
            cout<<num1*num2<<endl;
            break;
        case '/':
            cout<<num1/num2<<endl;
            break;
        case '%':
            cout<<num1%num2<<endl;
            break;
        case '^':
            cout<<pow(num1,num2)<<endl;
            break;
        default: cout<<" Invalid expression \n";

        

    }
    return 0;
    
}