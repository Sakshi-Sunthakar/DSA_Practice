//ackerman's function
#include<iostream>

using namespace std;

int ack(int m,int n)
{
    if(m==0)
    {
        return n+1;
    }
    else if((m>0) && (n==0))
    {
        return ack(m-1, 1);
    }
    else if((m>0) && (n>0))
    {
        return ack(m-1, ack(m,n-1));
    }
}

int main()
{
    int a,n,m;

    cout<<"m=";
    cin>>m;

    cout<<"n=";
    cin>>n;
    
    a=ack(m,n);
    cout<<"acker value is \n"<<a;

    
    return 0;

}