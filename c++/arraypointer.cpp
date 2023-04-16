// cpp program to read and print arrays using pointer.
#include<iostream>

using namespace std;

int main()
{
    int n,a[10],*p;
    cout<<"n=";
    cin>>n;
    p=a;
    cout<<"Enter the array elements one by one \n";
    for(int i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
    for(int i=0;i<n;i++)
    {
        cout<<" "<<*(p+i);
    }
    
    return 0;

}