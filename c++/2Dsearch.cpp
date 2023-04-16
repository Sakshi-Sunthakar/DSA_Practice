//Program to find elements in 2D dimensional array elements .
#include<iostream>

using namespace std;

int main()
{
    int n,m;

    cout<<"Enter the size of array\n";
    cin>>n>>m;

    int mat[10][10];
    cout<<"Enter the array elements \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    int r=0,c=n-1;
    bool flag=false;
    int find;
    cout<<"find=";
    cin>>find;
    while(r<m && c>=0)
    {
        int i,j;
        
        if( mat[r][c]==find)
        {
            cout<<r<<","<<c<<endl;
            flag=true;
        }

        mat[r][c]>find? c--:r++;
        
    }
    
    if(flag)
    {
        cout<<"Element found\n";
    }
    else
    {
        cout<<"Element not found\n";
    }

    return 0;
}