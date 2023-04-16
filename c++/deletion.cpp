//Program to delet an element from array.
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"n=";
    cin>>n;

    int a[100];
    cout<<" Enter elements \n";
    for( int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int pos;
    cout<<" Enter the position of  element to be  deleted\n";
    cin>>pos;

    for( int i=pos-1;i<=n-1;i++)
    {
        a[i]=a[i+1];
    }
    
    n=n-1;

    cout<<" Elements after deletion are\n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    
    return 0;
}