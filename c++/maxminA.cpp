//Program to find maximum and minimum of arrays elements.
#include<iostream>

using namespace std;

int main()
{
    int n,arr[10],i;

    cout<<" Enter the size of array elements \n";
    cin>>n;

    cout<<" Enter the array elements one by one \n ";
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<" The array elements are \n";
    for( int i=0;i<n;i++)
    {
        cout<<" "<<arr[i]<<" ";
    }

    int max_no=arr[0];
    int min_no=arr[0];
    for( int i=0;i<n;i++)
    {
        if(max_no<arr[i])
        {
            max_no=arr[i];
        }
        if(min_no>arr[i])
        {
            min_no=arr[i];
        }
    }

    cout<< "\n  maximum no is " <<max_no<<" \n  "<< "minimum no is " <<min_no;
    return 0;
}