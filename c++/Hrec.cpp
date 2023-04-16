//program to print hollow rectangular.
#include<iostream>

using namespace std;

int main()
{
    int i,j,m,n;
    cout<<" Enter the value of row and columns \n ";
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==m)
            {
                cout<<"#";
            }
            else if(j==1 || j==n)
            {
                cout<<"#";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    } 

    return 0;
}