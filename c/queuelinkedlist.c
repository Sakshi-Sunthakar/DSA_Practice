// Program to implement queues usings linked list
#include<stdio.h>
#include<stdlib.h>
struct NODE
{
    int data;
    struct NODE *link;
};
struct NODE node;
struct NODE *first=0,*head,*temp,*front ,*rear;

void qinsert();
void qdelete();
void qdisplay();

void qinsert()
{
    head=(struct NODE*)malloc(sizeof(struct NODE));
    printf("Enter the data\n");
    scanf("%d",&head->data);
    if(front==0)
    {
        front=rear=head;
        rear->link=0;
    }
    else
    {
        head->link=0;
        rear->link=head;
        rear=head;
    }
}
void qdelete()
{
    if(front==0)
    {
        printf("queue is empty \n");
    }
    else
    {
        temp=first;
        if(front==rear)
        {
            front=rear=0;
        }
        else
        {
            front=front->link;
        }
        free(temp);
    }
}
void qdisplay()
{
    if(front==0)
    {
        printf("linked list\n");
    }
    else
    {
        temp=front;
        while(temp!=0)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("\n__Queue Operation are__\n");
        printf("\n1.qinsert\n2.qdelete\n3.qdisplay\n4.exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:qinsert();
                    break;
            case 2:qdelete();
                    break;
            case 3:qdisplay();
                    break;
            case 4:exit(0);
        }
    }
}