//Program to print pascal triangle using function and factorial method.
#include<iostream>

using namespace std;

int fact( int n)
{
     int factorial=1;
    for(int i=2;i<=n;i++)
    {
        factorial=factorial*i;
    }

    return factorial;

}
int main()
{
    int n;
    
    cout<<" Enter the value of n \n";
    cin>>n;
    int i,j;
    for(int i=0;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"   "<<fact(i)/(fact(j)*fact(i-j));
        }
        cout<<endl;
    }
    return 0;
}