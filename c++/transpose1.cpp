//Program to fnd transpose of a matrix.
#include<iostream>

using namespace std;

int transpose ()
{
    int n;
    cin>>n;

    int arr[10][10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int brr[10][10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            brr[j][i]=arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for( int j=0;j<n;j++)
        {
           cout<<brr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;

}
int main()
{
    transpose();

    return 0;
}