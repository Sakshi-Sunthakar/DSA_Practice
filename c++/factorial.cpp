//Program to print factorial of number.
#include<iostream>

using namespace std;

int main ()
{
    int number,f=1;
    cout<<" Enter the number \n";
    cin>>number;

    for(int i=1;i<=number;i++)
    {
        f=f*i;
    }
    cout<<" Factorial of number is \n "<<f;
    return 0;
}