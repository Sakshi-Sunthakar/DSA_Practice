//Program to insert an new element in array.

#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"n=";
    cin>>n;

    int a[100];
    cout<<"enter the elements \n";
    for( int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int num;
    cout<<"Enter new element \n";
    cin>>num;

    int pos;
    cout<<"position ";
    cin>>pos;

    for( int i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    int i;
    a[pos-1]=num;
    n=n+1;

    cout<<"New array"<<endl;
    for( int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}