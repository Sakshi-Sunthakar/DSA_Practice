//program to perform shift opertor .
#include<stdio.h>

void main()
{
    int a,b,c,d;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    c=a<<2;
    d=b>>2;
    printf("%d  %d\n",c,d);
}