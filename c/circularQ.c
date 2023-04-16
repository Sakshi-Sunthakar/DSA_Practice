//Queue Operations 
#include<stdio.h>
#include<stdlib.h>

#define max_size 5

int queue[5];

int front=-1,rear=-1,i;
void Cqinsert();
void Cqdelete();
void Cqdisplay();
void main()
{
    int ch;
    while(1)
    {
        printf("\n__Queue Operation are__\n");
        printf("\n1.Cqinsert\n2.Cqdelete\n3.Cqdisplay\n4.exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:Cqinsert();
                    break;
            case 2:Cqdelete();
                    break;
            case 3:Cqdisplay();
                    break;
            case 4:exit(0);
        }
    }
}
void Cqinsert()
{
    int ele;
    if(front==(rear+1)%max_size)
    {
        printf("Queue is full \n");
    }
    else
    {
        printf("Enter the element to be inserted\n");
        scanf("%d",&ele);
        rear=(rear+1)%max_size;
        queue[rear]=ele;
        if(front==-1)
        {
            front=0;
        }
    }
}
void Cqdelete()
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
            front=(front+1)%max_size;
        }
    }
}
void Cqdisplay()
{
    if(front==-1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        printf("Element of queue are \n");
        
        for(i=front;i!=-1;i=(i+1)%max_size)
        {
            printf("%d\t",queue[i]);

            if(i==rear)
            {
                break;
            }

        }
    
    }
}

