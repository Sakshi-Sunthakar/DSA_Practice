//n is power of two 
#include<iostream>

using namespace std;

int power_2_bit(int n)
{
    return(n && !(n& (n-1)));
}

int main()
{
    int n;

    cout<<"n=";
    cin>>n;

    cout<<power_2_bit(n);
}