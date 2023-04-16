//Programme to print the given number is even or odd.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<" Enter the number \n";
    cin>>num;
    if(num%2!=0) 
    {
        cout<<" The given number is odd number "<<num<<endl;
    }
    else
    {
        cout<<" The given number is even number "<<num<<endl;
    }
    return 0;
}