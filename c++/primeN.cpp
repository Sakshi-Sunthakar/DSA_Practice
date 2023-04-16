//program to print prime numbers till n .
#include<iostream>

using namespace std;

int main()
{
    int num,N,i;
    cout<<" Enter the value of N \n";
    cin>>N;
    cout<<"Prime numbers are \n";
    for(num=2;num<=N;num++)
    {
        for(i=2;i<=num;i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
        if(i==num)
        {
            
            cout<<num<<endl;
        }
    }
    return 0;
}