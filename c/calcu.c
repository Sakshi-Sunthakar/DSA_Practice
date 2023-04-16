//program to perform simple calculator.
#include<stdio.h>

void main()
{
    int num1,num2,res;
    char op;

    printf("Enter the expression\n");
    scanf("%d%c%d",&num1,&op,&num2);

    switch(op)
    {
        case'+':res=num1+num2;
        printf("%d%c%d =%d",num1,op,num2,res);
        break;
        case'-':res=num1-num2;
        printf("%d%c%d =%d",num1,op,num2,res);
        break;
        case'*':res=num1*num2;
        printf("%d%c%d =%d",num1,op,num2,res);
        break;
        case'/':res=num1/num2;
        printf("%d%c%d =%d",num1,op,num2,res);
        break;
        case'%':res=num1%num2;
        printf("%d%c%d =%d",num1,op,num2,res);
        break;
        default:printf("invalid operator \n");
    }
}