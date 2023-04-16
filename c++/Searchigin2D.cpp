//Program to search the elements in 2d array elements.
#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cout<<"n=";
    cin>>n;
    cout<<"m=";
    cin>>m;

    int a[10][10];
    cout<<" Enter the array elements one by one \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<" Array elements \n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }
    int x;
    cout<<"Enter the element to searched\n";
    cin>>x;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==x)
            {
                cout<<i<<","<<j<<endl;
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        cout<<"Elements found \n";
    }
    else
    {
        cout<<" Element not found \n";
    }

    return 0;
}