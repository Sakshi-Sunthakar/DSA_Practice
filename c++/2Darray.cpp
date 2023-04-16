//program to read and print 2D array elements.
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
    cout<<"Enter the array elements one bye one \n ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<" Array elements are \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;

}