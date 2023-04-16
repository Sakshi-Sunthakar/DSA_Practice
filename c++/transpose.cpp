//Program to find the transope of the matrix.
#include<iostream>

using namespace std;

int transpose(int n)
{
    int arr[10][10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

   ;
    for( int i=0;i<n;i++)
    {
        for( int j=i;j<n;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<arr<<" "l[i][j];
        }
        cout<<"\n";
    }

    
    return 0;
}
int main()
{
    int n;
    cin>>n;

    transpose(n);

    return 0;
}