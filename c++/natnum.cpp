//Programme to print natural numbers till n;
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<" Enter the number n:";
    cin>>n;
    i=1;
    while(i<=n)
    {
        cout<<"  \t"<<i;
        i++;        
    }
    return 0;
}