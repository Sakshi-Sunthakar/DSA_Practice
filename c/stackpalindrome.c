//C program to check weather the given number is palindrome not using stack.
#include<stdio.h>
#include<stdlib.h>
int top=-1,n=10,i,stack[5];
void push()
{
    int ele;
    if(top==n-1)
    {
        printf("Stack is overflow\n");
    }
    else
    {
        printf("Enter the number\n");
        scanf("%d",&ele);
        top++;
        stack[top]=ele;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Element %d is deleted from stack\n",stack[top]); 
        top=top-1;
    }
}
void display()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    printf("Elements of stack are\n");
    for(i=0;i<=top;i++)
    {
        printf("%d\t",stack[i]);
    }

}
void palindrome()
{
    int flag=1;

    for(i=0;i<=(top/2);i++)//i<=top;
    {
        if(stack[i]!=stack[top-i])
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("It is  not palindrome number\n");
    }
    else
    {
        printf("It is  a palindrome \n");
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("\n__stack__operation__\n");
        printf("1.push\n2.pop\n3.display\n4.palindrome\n5.exit()\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:palindrome();
                    break;
            case 5:exit(0);
        }
    }
}