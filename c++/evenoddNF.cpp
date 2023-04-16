//Program to print even and odd functions usings functions.
#include<iostream>

using namespace std;

int even(int n);

int odd(int n);

int main()
{
    int n;

    cout<<" Enter the number \n";
    cin>>n;
    cout<<"\" Even number are\" \n";
    even(n);
    cout<<"\n\" Odd number are \"\n";
    odd(n);
    
    return 0;

}
int even(int n)
{
    int i=1;

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            continue;
        }

        cout<<i<<"\t";

    }

    return 0;
}
int odd(int n)
{
    int i=1;

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        cout<<i<<"\t";
    }
    return 0;
}