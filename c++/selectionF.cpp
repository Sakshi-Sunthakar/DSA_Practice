//Program to sort array elements using selection sort.
#include<iostream>

using namespace std;

int selection(int arr[],int n)
{
    int min=0;

    for( int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }

        if(min!=i)
        {
            swap(arr[i],arr[i]);
        }
    }

    for( int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main()

{
    int n;
    cout<<"n=";
    cin>>n;

    int arr[100];
    cout<<"Enter elements \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    selection(arr,n);

    return 0;
}