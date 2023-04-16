//Program to find weather the given character is alphabet or number using functions.
#include<iostream>

using namespace std;

int alphnum( char ch);

int main()
{
    char ch;
    cout<<" Enter the character \n";
    cin>>ch;

    alphnum(ch);

    return 0;
}
int alphnum(char ch)
{
    if((ch>='a'&& 'z'<=ch)||(ch>='A'&&'z'<=ch))
    {
        cout<<ch << " Is a alphbet";
    }
    else
    {
        cout<<ch << " Is a number ";
    }

    return 0;
}