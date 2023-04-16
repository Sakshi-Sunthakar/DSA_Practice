//Program to print which day of week.
#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<" Enter the number \n ";
    cin>>n;
    switch(n)
    {
        case '1':
            cout<<" Sunday \n";
            break;
        case '2':
            cout<<" Monday \n";
            break;
        case '3':
            cout<<" Tuesday \n";
            break;
        case '4':
            cout<<" Wednesday \n";
            break;
        case '5':
            cout<<" Thursday \n";
            break;
        case '6':
            cout<<" Friday \n ";
            break;
        case '7':
            cout<<" Saturday \n";
            break;
        default:
            cout<<" Invalid no ";
    }

    return 0;
}