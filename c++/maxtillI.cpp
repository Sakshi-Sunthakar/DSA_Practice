//Program to find max till I.

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[100];
    cout<<"Enter the Elements \n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int mx=-1999;

    for(int i=0;i<n;i++)
    {
       
       mx=max(mx,a[i]);
       cout<<mx<<endl;
       mx=0;

    }



    return 0;
}