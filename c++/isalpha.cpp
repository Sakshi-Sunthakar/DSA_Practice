//Program to count the number of vowels and consonant
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
    char str[100],ch;
    cout<<" Enter the string \n";
    cin.getline(str,100);
    int vcount=0,ccount=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(isalpha(str[i]))
        {
            ch=str[i];
            ch=tolower(ch);
        }
        switch(ch)
        {
            case 'a':vcount++;
                    break;
            case 'e':vcount++;
                    break;
            case 'o':vcount++;
                    break;
            case 'i':vcount++;
                    break;
            case 'u':vcount++;
                    break;
            default:ccount++;
        }
    }
    cout<<vcount<<endl<<ccount;

}