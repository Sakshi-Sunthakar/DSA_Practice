//Program to print maximum and minimum of three number using two functions.
#include<iostream>

using namespace std;

int max(int num1,int num2,int num3);

int min(int num1,int num2 ,int num3);

int main()
{
    int num1,num2,num3,n;

    cout<<" Enter the three numbers \n";
    cin>>num1>>num2>>num3;

    max(num1,num2,num3);

    min(num1,num2,num3);

    return 0;
}
int max(int num1,int num2,int num3)
{
    
    if(num1>num2)
    {
        if(num1>num3)
        {
            cout<<" num1 is maximum \n"<<num1;
        }
        else
        {
            cout<<" num3 is maximum\n "<<num3;
        }
    }
    else
    {
        if(num2>num3)
        {
            cout<<" num2 is maximum \n"<<num2;
        }
        else
        {
            cout<<" num3 is maximum\n "<<num3;
        }
    }

    return 0;
}
int min( int num1,int num2,int num3)
{
    

    if(num1<num2)
    {
        if(num1<num3)
        {
            cout<<"  \n num1 is minimum \n"<<num1;
        }
        else
        {
            cout<<"\n  num3 is minimum \n "<<num3;
        }
    }
    else
    {
        if(num2<num3)
        {
            cout<<"\n  num2 is minimum \n"<<num2;
        }
        else
        {
            cout<<"\n  num3 is minimum \n"<<num3;
        }
    }

    return 0;
}
