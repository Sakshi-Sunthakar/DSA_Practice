//Program to sort array elements using bubble sort (while).
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"n=";
    cin>>n;

    int a[100];

    cout<<"Enter Elements \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int count=0;
    while(count<n-1)
    {
        for(int i=0;i<n-count-1;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        count++;
    }

    cout<<"Sorted elements \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}