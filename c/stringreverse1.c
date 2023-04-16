#include<stdio.h>
#include<string.h>

void main()
{
    int i,j,len;
    char str[20],rev[10];

    scanf("%[^\n]",str);
    i=0;
    while(str[i]!=0)
    {
        len++;
        i++;
    }
    j=0;
    for(i=0;i<=len-1;i++)
    {
       rev[j]=str[len-i-1];
       j++;
    }

    rev[j]='\0';
    printf("%s",rev);
}