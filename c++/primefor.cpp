//program to check weather the given number is prime or not using for.
#include<iostream>

using namespace std;

int main()
{
    int n ,i;
    cout<<" Enter the value of n \n";
    cin>>n;
    for( i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<" Non prime number \n";
            break;
        }
        
    }
    if(i==n)
    {
        cout<<" prime number \n ";
    }
    
    return 0;
}