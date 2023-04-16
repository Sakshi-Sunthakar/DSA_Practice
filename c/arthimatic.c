//program to print %.
#include<stdio.h>

void main()
{
    int num1,num2,res;
    printf("Enter two numbers \n");
    scanf("%d%d",&num1,&num2);
    res=num1%num2;
    printf("%d%%%d=%d ",num1,num2,res);
    
}