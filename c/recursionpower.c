//program to find power of number using recursion.
#include<stdio.h>

int power(int n,int m);

void main()
{
    int n,m,p;

    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);

    p=power(n,m);

    printf("%d",p);

}
int power(int n,int m)
{
    if(m==0)
    {
        return 1;
    }
    else
    {
        return(n*power(n,m-1));
    }
}

