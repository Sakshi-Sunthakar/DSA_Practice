//program to print the spelling of given number.
#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    char rept[100][100]={"greater_the_one","one","two","three","four","five","six","seven","eight","nine"};

    printf("Enter the number\n");
    scanf("%d",&n);

    if(n>9)
    {
       printf("%s",rept[0]);
    }
    else
    {
       printf("%s",rept[n]);
    }
}