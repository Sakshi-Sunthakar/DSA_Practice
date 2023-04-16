//bit manuploication 
#include<iostream>
using namespace std;

//checking weather the no is power of 2 or not 

bool ISPOWEROFTWO (int n)
{
    return(n && !(n &(n-1)));
}

//counting set bit of number 

int COUNTSETBIT(int n)
{
    int count=0;
    while(n)
    {
        n=(n & (n-1));

        count++;
    }

    return count;
}
//Unique is element in array 

int Unique()
{
    
    int n;

    cout<<"n=";

    cin>>n;

    int arr[n];

    cout<<"Enter the arrary elements \n";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x=0;

    for(int i=0;i<n;i++)
    {
        x=x^arr[i];
    }

    return x;
}

int main()
{
    int n,ch;

    do
    {
        cout<<" \n--Bit manupilation --\n";
        cout<<"1.ISPOWEROFTWO\n2.COUNTSETBIT\n3.Unique\n4.return \n";
        cout<<"Enter your choice \n";
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"n=";
                    cin>>n;
                    cout<<ISPOWEROFTWO(n)<<endl;
                    break;
            case 2:cout<<"n=";
                    cin>>n;
                    cout<<COUNTSETBIT(n)<<endl;
                    break;
            case 3:cout<<Unique();
                    break;
            case 4:return 0;
            default:cout<<"Invalid choice";
        }
    }while(n!=ch);
    
    return 0;
}
