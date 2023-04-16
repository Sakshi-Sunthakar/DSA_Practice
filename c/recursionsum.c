//sum of natural numbers usings recursion
#include<stdio.h>
int sum(int n);
void main()
{
    int n,SUM;
    printf("Enter the number \n");
    scanf("%d",&n);
    SUM=sum(n);
    printf("%d the sum of numbers \n",SUM);
}
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n+sum(n-1));
    }
}