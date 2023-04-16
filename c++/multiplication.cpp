//Program to print multiplication table till N.
#include<iostream>

using namespace std;

int main()
{
    int N,i=1,mul;
    cout<<" Enter the value of ";
    cin>>N;
    
    for(i=1;i<=10;i++)
    {
        mul=N*i;
        cout<<N<<" * "<<i<<"="<<mul<<endl;
    }
    return 0;
    
}