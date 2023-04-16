//Program to count no of consonants and vowels.
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[100],ch,*sptr;
    int i,ccount=0,vcount=0;
    printf(" Enter the strings \n");
    scanf("%[^\n]",&str);
    sptr=str;
    for(i=0;*sptr!='\0';i++)
    {
        if(isalpha(*sptr))
        {
            ch=*sptr;
            ch=tolower(ch);
        }
        switch(ch)
        {
            case'a':vcount++;
                    break;        
            case'e':vcount++;
                    break;    
            case'i':vcount++;
                    break;
            case'o':vcount++;
                    break;
            case'u':vcount++;
                    break;
            default:ccount++;
        }
        sptr++;
    }
    printf("%d\n%d",vcount,ccount);

}