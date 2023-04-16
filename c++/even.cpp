//Program to print only even number.
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<" Enter the value of N \n";
    cin>>n;
    cout<<" Even numbers are \n";
    for(int i=1;i<=n;i++)
    {
        
        if(i%2!=0)
        {
            
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}