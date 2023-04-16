//program to factorial of number .
#include<stdio.h>
void factorial();
void main()
{
    factorial();
}
void factorial()
{
    int n,i,f=1;
    printf("Enter the number\n");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        f=f*i;
    }

    printf("%d",f);

}