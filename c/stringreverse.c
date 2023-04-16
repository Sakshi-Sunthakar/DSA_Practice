#include<stdio.h>
#include<string.h>

void main()
{
    int i,len;
    char str[20],ch;

    scanf("%[^\n]",str);//scanf("%s",str);
    len=strlen(str);
    for(i=0;i<=(len/2);i++)
    {
        ch=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=ch;
    }

    str[i+2]='\0';//str[i+1]='\0';

    printf("%s",str);
}