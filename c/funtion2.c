//program to print factiorial by using function with arguments and return type.
#include<stdio.h>
int Factorial();
void main()
{
    
    Factorail();
   
}
int Factorail()
{
    int fac,i,n;
    
    printf("n=");
    scanf("%d",&n);
    fac=1;
    for(i=2;i<=n;i++)
    {
        fac=fac*i;
    }

    printf("%d",fac);

}
