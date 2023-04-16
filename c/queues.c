//Queue Operations 
#include<stdio.h>
#include<stdlib.h>

#define max_size 5

char queue[5];

int front=-1,rear=-1,i;
void qinsert();
void qdelete();
void qdisplay();
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
void qinsert()
{
    int ele;
    if(rear==max_size-1)
    {
        printf("Queue is full \n");
    }
    else
    {
        printf("Enter the element to be inserted\n");
        scanf("%d",&ele);
        queue[++rear]=ele;
        if(front==-1)
        {
            front=0;
        }
    }
}
void qdelete()
{
    
    if(front==-1)
    {
        printf("Queue is empty \n");
    }
    else
    {
        printf("Element to be deleted is %d \n",queue[front]);

        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front++;
        }
    }
}
void qdisplay()
{
    if(front==-1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        printf("Element of queue are \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}

