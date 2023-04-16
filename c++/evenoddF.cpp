//Program to print even and odd nubers usings functions.
#include<iostream>

using namespace std;

int evenodd( int n);

int main()
{
    int n;
    cout<<" Enter the number \n";
    cin>>n;

    evenodd(n);

    return 0;
}
int evenodd( int n )
{
    int i=2;
    if(n%i==0)
    {
        cout<<" Number is even "<<n;
    }
    else
    {
        cout<<" Number is odd "<<n;
        
    }

    return 0;
}