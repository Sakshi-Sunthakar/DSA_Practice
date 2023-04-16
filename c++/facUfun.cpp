//Program to print factorial of number using function.
#include<iostream>

using namespace std;

int fac( int num);
int main()
{
    int num;
    cout<<" Enter the number\n ";
    cin>>num;

    int ans=fac(num);

    cout<<ans;

    return 0;
}
int fac(int num)
{
    int factorial=1;

    for(int i=2;i<=num;i++)
    {
        
        factorial*=i;

    }

    return factorial;
}