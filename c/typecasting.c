//program to check type casting.
#include<stdio.h>

void main()
{
    int a,b,c;
    float div;
    char ch='a';
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    div=(float)a/b;
    printf("%f",div);
    c=(int)ch;
    printf("%d",c);
}