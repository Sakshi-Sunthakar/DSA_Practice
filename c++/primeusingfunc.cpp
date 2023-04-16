//Program to find prime between two numbers.
#include<iostream>

#include<math.h>

using namespace std;

bool isprime( int num)
{
    
    for( int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{ 
    int a,b;
    cin>>a>>b;
    for( int num=a;num<=b;num++)
    {
        if(isprime(num))
        {
            cout<<num<<endl;
        }
    }
    return 0;
}