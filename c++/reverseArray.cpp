//reversing the given array and storing it in another array.
#include<iostream>

using namespace std;

int main()
{
    int n,i,j,a[10],b[10];

    cout<<"n=";
    cin>>n;
    cout<<" Enter the elements \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<" Array after sorting is \n";
    for(i=n-1;i>=0;i--)
    {
        b[i]=a[i];
        cout<<b[i]<<" ";

    }
    return 0;
}