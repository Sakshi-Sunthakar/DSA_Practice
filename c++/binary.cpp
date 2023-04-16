//Program to find key element using binary search method.
#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"n=";
    cin>>n;

    int arr[10];

    cout<<"Array elements\n";
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;

    cout<<"key=";
    cin>>key;

    int s=0,e=n-1;
    int loc=-1;
    int mid;
    while(s<=e)
    {
        
        mid=(s+e)/2;

        if(arr[mid]==key)
        {
            loc=mid;

            break;
        }
         else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }

    if(loc>-1)
    {
        cout<<" Element found at position "<<mid+1;

    }
    else
    {
        cout<<" Element not found \n";
    }

    
      return 0;
}