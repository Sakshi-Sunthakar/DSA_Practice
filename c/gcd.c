//gcd of 2 numbers

#include<stdio.h>

int GCD(int a,int b);

void main()
{
    int a,b;

    printf("Enter the number\n");

    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);

    printf("GCD of two numbers %d and %d is %d ",a,b,GCD(a,b));
}
int GCD(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return GCD(b,a%b);
    }
}
