//Program to implement insretion sort.

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"n=";
    cin>>n;

    int a[100];
    cout<<"Enter elements \n";
    for( int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=1;i<=n;i++)
    {
        int current=a[i];
        int j=i-1;
        while(j>=0 && a[j]>current)
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=current;

    }

    cout<<"Sorted elements \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}