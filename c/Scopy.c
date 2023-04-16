//Program to copy string usings pointers.

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100],str2[100],*sptr1,*sptr2;
    int i;
    printf("Enter the string \n");
    scanf("%s",str1);
    sptr1=str1;
    sptr2=str2;
    while(*sptr1!='\0')
    {
        *sptr2=*sptr1;
        i++;
        sptr1++;
        sptr2++;

    }
    
    str2[i]='\0';

    printf("%s",str2);
}