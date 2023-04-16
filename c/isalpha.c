//Program to count no of consonants and vowels.
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[100],ch;
    int i,ccount=0,vcount=0;
    printf(" Enter the strings \n");
    scanf("%[^\n]",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if(isalpha(str[i]))
        {
            ch=str[i];
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
    }
    printf("%d\n%d",vcount,ccount);

}