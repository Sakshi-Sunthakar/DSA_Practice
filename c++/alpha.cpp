//Program to check weather the given number is consonant or vowel.
#include<iostream>
using namespace std;
int main()
{
    char  c;

    cout<<" Enter the alphabet : \t";
    cin>>c;

    switch(c)
    {
        case 'a':
            cout<<" Alphabet "<<c<< " is an vowel"<<endl;
            break;
        case 'e':
            cout<<" Alphabet "<<c<<" is an vowel"<<endl;
            break;
        case 'i':
            cout<<" Alphabet "<<c<<" is an vowel "<<endl;
            break;
        case 'o':
            cout<<" Alphabet " <<c<<" is an vowel "<<endl;
            break;
        case 'u':
            cout<<" Alphabet "<<c<<" is an vowel "<<endl;
            break;
        default:
            cout<<" Alphabet " <<c<<" is consonant ";

    }

    return 0;

}