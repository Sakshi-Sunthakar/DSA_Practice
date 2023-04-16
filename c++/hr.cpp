#include<iostream>

using namespace std;

void find_number(int arr1[],int m,int x);

int main()
{

    int n,flag=0;

    cin>>n;

    int arr[10];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;

    cin>>key;

    find_number( arr, n, key);

    return 0;
}
void find_number(int arr1[],int m,int x)
{
    int flag=0;

    for(int i=0;i<m;i++)
    {
        if(x==arr1[i])
        {
           flag=1;
        }
    }

    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
   
}