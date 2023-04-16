//program to copy the string
#include<stdio.h>
#include<string.h>
void main()
{
    int i=0;
    char str[10],strp[10];
    printf("Enter the string \n");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        strp[i]=str[i];
        i++;
    }
    strp[i]='\0';
    printf("%s",strp);

}