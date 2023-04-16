//Program to chech weather  the number is amstrong or not amstrong not .
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int num,ld,temp,sum=0;

    cout<<" Enter the number \n ";
    cin>>num;

    temp=num;
    do
    {
        ld=num%10;
        sum+= ld*ld*ld;
        num=num/10;

    }while(num>0);
    
    if(sum==temp)
    {
        cout<<" Number is amstrong "<<sum<<endl;
    }
    else
    {
        cout<<" Number not an amstrong "<<sum<<endl;
    }

    return 0;
}
