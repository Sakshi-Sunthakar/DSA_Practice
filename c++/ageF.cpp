//Program to check weather the person is eligible to vote or no.
#include<iostream>

using namespace std;

int age( int num);
 
int main()
{
    int num;

    cout<<" Enter the age of person \n ";
    cin>>num;

    age(num);

    return 0;

}
int age( int num)
{
    if(num>18)
    {
        cout<<" Person is eligible to vote \n";
    }
    else
    {
        cout<<" Person is not eligible to vote \n";
    }

    return 0;
}