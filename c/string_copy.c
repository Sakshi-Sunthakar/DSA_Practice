//program to copy the string
#include<stdio.h>
#include<string.h>
void main()
{
    char str[10],strp[10];
    printf("Enter the string \n");
    scanf("%s",str);
    strcpy(strp,str);
    printf("%s",strp);

}