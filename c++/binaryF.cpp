//Program to find key element using binary search method.

#include<iostream>

using namespace std;

int binary(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;

    int mid,loc=-1;

    while(s<=e)
    {
        mid=(s+e)/2;

        if(arr[mid]==key)
        {
            return mid+1;
            break;
        }
        else if(arr[mid>key])
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }

    }

}
int main()
{
    int n;
    cout<<"n=";
    cin>>n;

    int arr[10];
    cout<<" Enter elements \n";
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"key=";
    cin>>key;

    cout<<binary(arr,n,key)<<endl;

    return 0;

}