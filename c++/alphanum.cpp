//Program to check weather the given number is Alphabet or Number.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a Character: ";
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        cout<<endl<<ch<<" is an Alphabet";
    }
    else
    {
        cout<<endl<<ch<<" Is the  number ";
    }
    cout<<endl;
    return 0;

}
