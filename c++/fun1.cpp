//Program to print prime no's till N.
#include<iostream>

using namespace std;

int prime(int n);
int main()
{
    int n, num;
    cout<<" Enter value of n\n";
    cin>>n;
   
    cout<<prime(n);
    
    return 0;

}
int prime(int n)
{
    for( int num=2;num<=n;num++)
    {
        int i;
        for( i=2;i<=num;i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
        if(i==num)
        {
           cout<<num; 
        }
    }
}