//Program to find unique in array 

#include<iostream>

using namespace std;

int uniqueelement(int arr[],int n)
{
    int j;

    for(int i=0;i<n;i++)
    {
        for( j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j) 
            {
                break;
            }
        }
        if(j==n)
        {
            cout<<" "<<arr[i];
        }
    }
}

int main()
{
    int n;

    cout<<"n=";

    cin>>n;

    int arr[n];

    cout<<"Enter the arrary elements \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    uniqueelement(arr,n);

}

