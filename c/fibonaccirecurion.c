//fibonacci with resurion
#include<stdio.h>
int fib(int n);
void main()
{
    int n,fibonnaci;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    fibonnaci=fib(n);
    printf("%d",fibonnaci);
    
}
int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    else
    {
        if(n==2)
        {
            return 1;
        }
        else
        {
            return(fib(n-1)+fib(n-2));
        }
    }
}