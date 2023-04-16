//printing pattern 

#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"n=";
    
    cin>>n;

    int rc=2*n-1;

    for(int i=1;i<=rc;i++)
    {
        for(int j=1;j<=rc;j++)
        {
            cout<<n;
        }
        cout<<endl;
    }
}