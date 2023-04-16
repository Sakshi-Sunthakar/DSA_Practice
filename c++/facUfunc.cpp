//Program to print factorial of a number.
#include<iostream>

using namespace std;

void fac( int num)
{
    int f=1;
    for ( int i=2;i<=num;i++)
    {
        f*=i;
    }
    cout<<f;
    return;
}
int main()
{
    int num;
    cin>>num;

    fac(num);
    
    return 0;
}