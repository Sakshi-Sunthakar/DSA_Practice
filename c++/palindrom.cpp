//program to {check weather the given number palindrom or not .
#include<iostream>
using namespace std;
int main()
{
    int rev=0,rem,num,temp;
    cout<<" Enter the number \n ";
    cin>>num;
    temp=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(temp==rev)
    {
        cout<<"The given number is palindrom "<<rev<<endl;
    }
    else
    {
        cout<<" Not a palindrom "<<rev<<endl;
    }
    return 0;

}