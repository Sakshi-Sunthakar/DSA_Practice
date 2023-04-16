//Program to find multiplication of two matrix.
#include<iostream>

using namespace std;

int main()
{
    int a[10][10],b[10][10],M[10][10];

    int m,n;
    cout<<"m=";
    cin>>m;
    cout<<"n=";
    cin>>n;

    cout<<"Enter the value of matrix A\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    int p,q;
    cout<<"p=";
    cin>>p;
    cout<<"q=";
    cin>>q;

    cout<<"Enter the value of matrix A\n";
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>b[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            M[i][j]=0;
        }
    }

    if(n==p)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                for(int k=0;k<n;k++)
                {
                    M[i][j]=M[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        cout<<" Resultant Matrix \n";
        
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<q;j++)
                    {
                        cout<<M[i][j]<<" ";
                    }
                    cout<<"\n";
                }
    }
    else
    {
        cout<<"n!=p";

    }

    return 0;

}