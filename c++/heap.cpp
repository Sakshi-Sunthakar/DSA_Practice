//program to dymanically allocate the memory.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    int *p=new int[n];
    cout<<"Enter elements one by one \n";
    for(int i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
    for(int i=0;i<n;i++)
    {
        cout<<"  "<<*(p+i);
    }
    
    delete(p);

    return 0;
}