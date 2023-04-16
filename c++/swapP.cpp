//Program to swap two numbers usings pointers.
#include<iostream>

using namespace std;

int swap(int* aptr,int* bptr)
{
    int temp;
    temp=*aptr;
    *aptr=*bptr;
    *bptr=temp;

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
   

    swap(&a,&b);
    cout<<"a="<<a<<"\n"<<"b="<<b<<endl;

    return 0;
}