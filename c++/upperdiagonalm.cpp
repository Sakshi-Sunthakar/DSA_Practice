// Test the algorithm 

#include<iostream>

using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    int a[10][10];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            a[i][j]=0;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<"\t";
        }
    }
}