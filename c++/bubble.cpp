//Program to sort array elements using bubble sort method.
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"n=";
    cin>>n;

    int arr[100];
    cout<<"Enter Elements \n";
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
         int flag=0;
        for(int j=0;j<(n-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
        break;
        }
    }

    cout<<"Sorted elements are \n ";
    for( int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}