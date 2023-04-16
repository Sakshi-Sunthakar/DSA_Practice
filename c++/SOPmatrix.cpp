//Program to print the matrix in spiral order .
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
    cout <<" Enter the array elements one by one .\n";
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
           cin>>a[i][j];
       }
    }

    int r_s=0,r_e=n-1,c_s=0,c_e=n-1;

    while(r_s<=r_e&&c_s<=c_e)
    {
        for(int col=c_s;col<=c_e;col++)
        {
            cout<<a[r_s][col]<<" ";
        }

        r_s++;

        for(int row=r_s;row<=r_e;row++)
        {
            cout<<a[row][c_e]<<" ";
        }

        c_e--;

        for(int col=c_e;col>=c_s;col--)
        {
            cout<<a[r_e][col]<<" ";
        }

        r_e--;

        for(int row=r_e;row>=r_s;row--)
        {
            cout<<a[row][c_s]<<" ";
        }
        c_s++;
    }
    return 0;
}