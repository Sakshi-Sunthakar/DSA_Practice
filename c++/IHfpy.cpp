//program to print inverted half tringle.
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<" Enter the value of rows \n ";
    cin>>n;
    for( int i=1;i<=n;i++)
    {
        for( int j=n;j>=i;j--)
        {
            cout<<"* ";

        }
        cout<<endl;
    }

    return 0;

}