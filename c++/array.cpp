//Program to read and print array elements.
#include<iostream>

using namespace std;

int main()
{
    int n,arr[10];

    cout<<" Enter the size of array ";
    cin>>n;

    cout<<" Enter the array elements one by one \n";
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    

    cout<<" Array elements are \n";
    for( int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}
