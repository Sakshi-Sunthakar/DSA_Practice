//program to find largest of three numbre
#include<stdio.h>
void smallest(int n1,int n2,int n3);
void largest(int n1,int n2,int n3);
void main()
{
    int n1,n2,n3;
    printf("Enter the value of num1,num2,num3 \n");
    scanf("%d%d%d",&n1,&n2,&n3);

    largest(n1,n2,n3);
    smallest(n1,n2,n3);
}
void largest(int n1,int n2,int n3)
{
    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("num1 is largest  %d",n1);
        }
        else
        {
            printf("num3 is largest  %d",n3);
        }
    }
    else
    {
        if(n2>n3)
        {
            printf("num2 is largest  %d",n2);
        }
        else
        {
            printf("num3 is largest  %d",n3);
        }
    }
    
}
void smallest(int n1,int n2,int n3)
{
    if(n1<n2)
    {
        if(n1<n3)
        {
            printf("\n num1 is smallest  %d",n1);
        }
        else
        {
            printf("\n num3 is smallest  %d",n3);
        }
    }
    else
    {
        if(n2<n3)
        {
            printf("\n num2 is smallest  %d",n2);
        }
        else
        {
            printf("\n num3 is largest  %d",n3);
        }
    }
    
}
