//program to add to numbers using pointer.
#include<iostream>

using namespace std;

int sum(int* aptr,int* bptr)
{  
    int Sum;
    Sum=*aptr+*bptr;
    cout<<"a+b="<<Sum;
}
int main()
{
    int a,b;
    cout<<"a=";
    cin>>a;
    int* aptr=&a;
    cout<<"b=";
    cin>>b;
    int* bptr=&b;
    sum(&a,&b);
    return 0;
}