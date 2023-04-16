//program to print 2D array elements.
#include<iostream>

using namespace std;

int main()
{
    int n,m,a[10][10],b[10],*p;
    cout<<"n=";
    cin>>n;
    cout<<"m=";
    cin>>m;
    p=&a[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
              cin>>(*(p+i)+j);
        }
    }
    p=&a[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
              cout<<" "<<*(*(p+i)+j);
        }
        cout<<endl;
    }
}
