//Program to find nCr of number.
#include<iostream>

using namespacep std;

int fac( int num);

int main()
{
    int num,r;
    
    cin>>num>>r;

    int ans=fac(num)/(fac(num-r)*fac(r));

    cout<<ans;
    return 0;
}
int fac( int num)
{
     int factorial=1;

    for(int i=2;i<=num;i++)
    {

        factorial*=i;

    }
    return factorial;

}