//Program to add to numbers usings functions.
#include<iostream>

using namespace std;

int sum(int num1, int num2);
int main()
{
    int a,b,add;
    cout<<" Enter the value of two numbers \n ";
    cin>>a>>b;
    add=sum(a,b);
    cout<<" Sum is " <<add;
    return 0;
}
int sum(int num1, int num2)
{
    int res;
    res=num1+num2;
    return res;
}