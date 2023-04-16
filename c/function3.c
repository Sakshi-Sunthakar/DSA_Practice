//program to print factiorial by using function with arguments and  no return type.
#include<stdio.h>
int Factorial(int n);
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    Factorail(n);
   
}
int Factorail(int n)
{
    int fac,i;
    
    fac=1;
    for(i=2;i<=n;i++)
    {
        fac=fac*i;
    }

    printf("%d",fac);

}
