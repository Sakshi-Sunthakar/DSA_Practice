//dynamically allocating memory .
#include<iostream>


using namespace std;

int main()
{
    int n,*ptr,*Ptr1;
    cin>>n;
    ptr=(int*)malloc(n*sizeof(int));
    ptr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }
    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<" ";
    }

    delete(ptr);


    return 0;
}