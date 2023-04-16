//Program to find fibonacci series using function;
#include<iostream>

using namespace std;

void fib(int n)
{
    int t1,t2,nt;

    t1=0;
    t2=1;
    for(int i=0;i<=n;i++)
    {
        cout<<t1<<" ";
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }
    return;

}

int main()
{
    int n;
    cin>>n;

    fib(n);

    return 0;
}