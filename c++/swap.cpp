//Programme to swap two without using temprory varibles.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<" Enter the values of a and b \n";
    cin>>a>>b;
    cout<<"The values of a and b before swapping is \n a = "<<a<<endl<<" b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<" The values of a and b after swapping is \n a ="<<a<<endl<<" b="<<b<<endl;
    return 0;

}