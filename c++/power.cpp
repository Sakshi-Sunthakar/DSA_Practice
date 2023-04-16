//program to find power of number 
#include<iostream>

using namespace std;

int main()
{
    int n,m,p=1;
    cin>>n;
    cin>>m;
    for(int i=1;i<=n;i++)
    {
        p=p*m;
    }
    cout<<"n^m = "<<p;

}