//Program to concatenate twostring without using libary functions.
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100],*sptr1,*sptr2;
    int i,j;
    printf("Enter the string1 \n");
    scanf("%s",str1);
    printf("Enter the string2 \n");
    scanf("%s",str2);
    i=0;
    sptr1=str1;
    sptr2=str2;

    while(*sptr1!='\0')
    {
        sptr1++;
    }
    
    while(*sptr2!='\0')
    {
        *sptr1=*sptr2;
        sptr1++;
        sptr2++;
        
    }
    *sptr1='\0';

    printf("%s",str1);

}