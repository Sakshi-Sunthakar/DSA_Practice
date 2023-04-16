//Program to print fibonaacci series.
#include<iostream>

using namespace std;

int fib(int num)
{
    int t2,nextt,t1;
    for(int i=0;i<=num;i++)
    {
        return t1;
        nextt=t1+t2;
        t1=t2;
        t2=nextt;
    }
    
}

int main()
{
    int t1,t2,nextt,num;
    t1=0;
    t2=1;

    cin>>num;

    cout<<fib(num);
    
    return 0;

}