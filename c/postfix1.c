//evalution of postfix expression.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int top=-1,stack[10],i,op2,op1,res,arr[10],value;
char postfix[10],symb;
void push(int item)
{
    top=top+1;
    stack[top]=item;

}
int pop()
{
    int item;
    item=stack[top];
    top=top-1;
    return item;
}
void main()
{
    printf("Enter the a valid postfix expression \n");
    scanf("%s",postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
        symb=postfix[i];
        if(isalpha(symb))
        {
            printf("Enter the value of %d first operand\n",i+1);
            scanf("%d",&value);
            push(value);
            arr[i]=value;
        }
        else
        {
            op2=pop();
            op1=pop();
            switch (symb)
            {
            case '+':push(op2+op1);
                     break;
            case '-':push(op2-op1);
                     break;
            case '*':push(op2*op1);
                     break;
            case '/':push(op2/op1);
                     break;
            case '^':push(pow(op2,op1));
                     break;
            default:printf("invalid opertor\n");
                break;
            }
        }
    }
    res=pop();

    printf("Result=%d",res);

}