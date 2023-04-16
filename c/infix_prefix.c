//coversion of infix to prefix
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void convert();
char pop();
int prec(char);
void push(char item);
char infix[30],prefix[30],stack[30],rev[30],res[30];
int top=-1,len,size;
void main()
{
    printf("Enter the infix expression\n");
    scanf("%s",infix);
   
    convert();

    printf("Corresponding prefix expression is %s\n", strrev(prefix));

}
void convert()
{
    int i,j=0;
    char symb,temp;
    push('#');
    len=strlen(infix);
    for(i=len-1;infix[i]!='\0';i--)
    {
        symb=infix[i];
        switch(symb)
        {
            case ')' :push(symb);
                      break;
            case '(':temp=pop();
                    while(temp!=')')
                    {
                        prefix[j]=temp;
                        j++;
                        temp=pop();
                    }
                    break;
            case '+':
            case '-':
            case '*':
            case '%':
            case '^':
            case '$':if(prec(stack[top])<=prec(symb))
                    {
                            push(symb);
                            break;
                    }
                    else
                    {
                            while(prec(stack[top])>=prec(symb))
                            {
                                temp=pop();
                                prefix[j]=temp;
                                j++;
                            }
                    }
                   
            default:prefix[j]=symb;
                    j++;

        }
    }
    while(stack[top]!='#')
    {
        temp=pop();
        prefix[j]=temp;
        j++;
        
    }
    prefix[j]='\0';
    
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
        case '$':p=2;
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
