//swapping of two numbers using temprory varible.
#include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    cout<<" Enter the value of a and b \t";
    cin>>a>>b;9
    cout<<" Value of a and b before swapping \n a="<<a<<endl<<" b="<<b<<endl;
    t=a;
    a=b;
    b=t;
    cout<<" value of a and b after swapping \n a="<<a<<endl<<" b="<<b<<endl;
    return 0;

}