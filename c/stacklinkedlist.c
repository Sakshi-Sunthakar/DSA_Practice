//program to implement stack using linked list 
#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct NODE
{
    int data;
    struct NODE *link;
};
struct NODE node;
struct NODE *first=0,*head,*top,*temp;
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
void push()
{
    head=(struct NODE*)malloc(sizeof (struct NODE));
    printf("Enter the data \n");
    scanf("%d",&head->data);
    if(top==0)
    {
        top=head;
        top->link=0;
    }
    else
    {
        head->link=top;
        top=head;
    }
}
void pop()
{
    if(top==0)
    {
        printf("Linked stack is empty \n");
    }
    else
    {
        temp=top;
        printf("deleted element is %d ",top->data);
        top=top->link;
        free(temp);
    }
}
void display()
{
    if(top==0)
    {
        printf("linked stack is empty \n");
    }
    else
    {
        temp=top;
        while(temp!=0)
        {
            printf("%d\n",temp->data);
            temp=temp->link;
        }
    }
}