//Program to concatenate twostring without using libary functions.
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int i,j,count=0;
    printf("Enter the string1 \n");
    scanf("%s",str1);
    printf("Enter the string2 \n");
    scanf("%s",str2);
    i=0;
    while(str1[i]!='\0')
    {
        count++;
        i++;
    }
    i=count;
    j=0;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';

    printf("%s",str1);

}