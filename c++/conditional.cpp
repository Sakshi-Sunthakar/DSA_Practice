//Program to print spelling of a given number.

#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<" Enter the number \n";
    cout<<"n=";
    cin>>n;
    
    string represent[10]={"Greater than nine","one","two","three","four","five","six","seven","eigth","nine"};
    
    if(n>9)
    {
        cout<<represent[0];
    }
    else
    {
        cout<<represent[n];
    }

    return 0;
}