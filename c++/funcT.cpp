//program to check function.

using namespace std;
#include<iostream>
int add(int a,int b)
{
   int sum=a+b;
    return sum;
}
int main()
{
    int x,y;
    cout<<" Enter the values of two numbers \n ";
    cin>>x>>y;
    cout<<add(x,y)<<endl;
    return 0;
}
