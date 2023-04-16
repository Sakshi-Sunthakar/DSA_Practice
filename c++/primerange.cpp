//program to print prime number within the given range .
#include<iostream>

using namespace std;

int main()
{
    int a,b,num,i;
    cout<<" Enter the two numbers \n ";
    cin>>a>>b;
    for( num=a;num<=b;num++)
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
        if(i==num)
        {
            cout<<num<<endl;
        }
    }
    return 0;
}