 //program to print factiorial by using function with  no  arguments and with return type.
#include<stdio.h>
int Factorial();
void main()
{
    int fac; 
    fac=Factorail();
    printf("%d",fac);
   
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

    return fac;

}
