//reversing the given array .
#include<iostream>

using namespace std;

int main()
{
    int a[10],b[10],j,i,n;

    cout<<"n=";
    cin>>n;
    cout<<"Enter the elements.\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i=0;
    for(j=n-1;j>=0;j--)
    {

        b[j]=a[i];
        i++;
    }
     for(i=0;i<n;i++)
    {
         cout<<b[i]<<" ";
    }
    return 0;
}