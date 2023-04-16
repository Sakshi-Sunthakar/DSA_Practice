//Program to print fibonaacci series.
#include<iostream>

using namespace std;

int main()
{
    int t1,t2,nextt,num;
    t1=0;
    t2=1;

    cin>>num;

    for(int i=0;i<=num;i++)
    {
        cout<<t1<<"\t";
        nextt=t1+t2;
        t1=t2;
        t2=nextt;
    }

    return 0;

}