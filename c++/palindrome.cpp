//program to print palindromic triangle.
#include<iostream>

using namespace std;

int main()
{

    int n,i,j,k;
    cout<<"n=";
    cin>>n;

    for( int i=1;i<=n;i++)
    {
        int j;
        for( j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
         int k=i;
        for(;j<=n;j++)
        {
            cout<<k;
            k--;
        }
        k=2;
        for(;j<=n+i-1;j++)
        {
            cout<<k;
            k++;
        }
        for(;j<=(2*n-1);j++)
        {
            cout<<" ";

        }

        cout<<endl;
    }

    return 0;

}