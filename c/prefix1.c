//evalution of postfix expression.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int top=-1,stack[10],i,op2,op1,res,value,len=0,arr[10];
char prefix[10],symb;
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

    printf("Enter the a valid prefix expression \n");
    scanf("%s",prefix);
    i=0;
    while(prefix[i]!='\0')
    {
        len++;
        i++;
    }
    
    for(i=len-1;prefix[i]!='\0';i--)
    {
        symb=prefix[i];
        if(isdigit(symb))
        {
            push(symb-'0');
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