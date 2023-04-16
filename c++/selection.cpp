//Program to sort array elements using selection sort method.
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"n=";
    cin>>n;

    int arr[100];
    cout<<"Enter the Elements \n";
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for( int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(arr[i],arr[min]);
        }
    }

    cout<<" Sorted array elements are \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}