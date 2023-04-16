//Program to print half pyramid usings no's .
#include<iostream>

using namespace std;

int main()
{

    int n;

    cout<<" Enter the number of rows \n ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; ++j)
        {

            cout<<i<<" ";
        }

        cout<<endl;

    }

    return 0;
}