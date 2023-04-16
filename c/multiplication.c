//Programme to print  multiplication table of number.
#include<stdio.h>
void main()
{
    int n,i,mul;
    printf(" Enter the value of number \n");
    scanf(" %d",&n);
    i=1;
    printf(" Multiplication table of %d is \n",n);
    while(i<=10)
    {
        mul=n*i;
        printf("%d*%d=%d \n",n,i,mul);
        i++;

    }
}