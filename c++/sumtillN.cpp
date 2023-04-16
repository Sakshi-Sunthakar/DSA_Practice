//Program to find till N number .
#include<iostream>

using namespace std;

int main()
{
    int i,N,sum=0;
    cout<<" Enter the values of N \n";
    cin>>N;
    for(i=1;i<=N;i++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}