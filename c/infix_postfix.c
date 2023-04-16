//coversion of infix to postfix
#include<stdio.h>
#include<stdlib.h>
void convert();
char pop();
int prec(char);
void push(char item);
char infix[30],postfix[30],stack[30];
int top=-1;
void main()
{
    printf("Enter the infix expression\n");
    scanf("%s",infix);
    convert();
    printf("Corresponding postfix expression is %s\n",postfix);

}
void convert()
{
    int i,j=0;
    char symb,temp;
    push('#');
    for(i=0;infix[i]!='\0';i++)
    {
        symb=infix[i];
        switch(symb)
        {
            case '(' :push(symb);
                    break;
            case ')':temp=pop();
                    while(temp!='(')
                    {
                        postfix[j]=temp;
                        j++;
                        temp=pop();
                    }
                    break;
            case '+':
            case '-':
            case '*':
            case '%':
            case '^':
            case '$':while(prec(stack[top])>=prec(symb))
                    {
                        temp=pop();
                        postfix[j]=temp;
                        j++;
                    }
                    push(symb);
                    break;
            default:postfix[j]=symb;
                    j++;

        }
    }
    while(top>0)
    {
        temp=pop();
        postfix[j]=temp;
        j++;
        
    }
    postfix[j]='\0';
}
int prec(char symb)
{
    int p;
    switch(symb)
    {
        case '#':p=-1;
                break;
        case '(':p=0;
                break;
        case ')':p=0;
                break;
        case '+':p=1;
                break;
        case '-':p=1;
                break;
        case '*':p=2;
                break;
        case '%':p=2;
                break;
        case '/':p=2;
                break;
        case '^':p=3;
                break;
        case '$':p=3;
                break;
    }
    return p;
}
void push(char item)
{
    top=top+1;
    stack[top]=item;
}
char pop()
{
    char item;
    item=stack[top];
    top=top-1;
    return item;
}
