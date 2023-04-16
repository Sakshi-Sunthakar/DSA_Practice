//program to print factiorial by using function with arguments and return type.
#include<stdio.h>
int Factorial(int n);
int main()
{
    int n,fac;
    printf("n=");
    scanf("%d",&n);
    fac=Factorail(n);
    printf("%d",fac);
    return 0;
}
int Factorail(int n)
{
    int fac,i;
    fac=1;
    for(i=2;i<=n;i++)
    {
        fac=fac*i;
    }

    return fac;

}
