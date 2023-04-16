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
    if(n==2)
    {
        return 2;
    }
    else if((n%2)==0)
    {
        return (n+sum(n-2));
    }
    else
    {
        return (sum(n-1));
    }
}