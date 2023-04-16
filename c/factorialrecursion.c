//factorial using recusion
#include<stdio.h>
int fac(int n);
void main()
{
    int n,factorial;
    printf("Enter the number\n");
    scanf("%d",&n);
    factorial=fac(n);
    printf("Factorial of %d is %d \n",n,factorial);
}
int fac(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (n*fac(n-1));
    }
}