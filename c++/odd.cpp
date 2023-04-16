//Program to print only odd numbers .
#include<iostream>

using namespace std;

int main()
{
    int N;
    cout<<" Enter a number \n";
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}