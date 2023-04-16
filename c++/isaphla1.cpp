//program to count the number of vowels and consonants.
#include<iostream>

using namespace std;

int main()
{
    char str[100]="Sakshi",ch;
    int vcount=0,ccount=0;

    for(int i=0;str[i]!='\0';i++)
    {
         ch=str[i];
    
        if(ch=='e'||ch=='a'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vcount++;
        }
        else
        {
            ccount++;
        }
    }
    cout<<ccount<<endl<<vcount;

    return 0;
}