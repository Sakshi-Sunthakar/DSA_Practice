//program to perform stack opertions .
#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1,i,stack[n];
void push()
{
    int ele;
    if(top==n-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Enter the element \n");
        scanf("%d",&ele);
        stack[++top]=ele;
    }

}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("poped element is %d\n",stack[top--]);
    }
}
void display()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    printf("Elements of stack  are \n");
    
    for(i=0;i<=top;i++)
    {
        printf("%d ",stack[i]);
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("\n__stack__operation__\n");
        printf("1.push\n2.pop\n3.display\n4.exit()\n");
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
            case 4:exit(0);
        }
    }
}