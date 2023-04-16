//Double ended queue 
#include<stdio.h>
#include<stdlib.h>
void insert_rear();
void delete_front();
void insert_front();
void delete_rear();
void display();
#define n 6
int queue[n],front=-1,rear=-1,i;
void main()
{
    int ch;
    while(1)
    {
        printf("\n Queue opertions are\n");
        printf("1.insert_rear\n2.delete_front\n3.insert_front\n4.delete_rear\n5.display\n6.exit\n");
        printf("Enter your choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_rear();
                    break;
            case 2:delete_front();
                    break;
            case 3:insert_front();
                    break;
            case 4:delete_rear();
                    break;
            case 5:display();
                    break;
            case 6:exit(0);
                    break;
                
        }
    }
}
void insert_rear()
{
    int ele;
    if(rear==n)
    {
        printf("Queue is full \n");
    }
    else
    {
        printf("Enter the number \n");
        scanf("%d",&ele);

        queue[++rear]=ele;
        if(front==-1)
        {
            front=0;
        }

    }
}
void delete_front()
{
    if(front==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Element to deleted is %d",queue[front]);

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
void display()
{
    if(front==-1)
    {
        printf("queue is empty \n");
    }
    else
    {
        printf("Elements of queue are\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}
void insert_front()
{
    int ele;
    if(front==0 || front==-1)
    {
        printf("Queue is full \n");
    }
    else
    {
        printf("Enter the element to be inserted \n");
        scanf("%d",&ele);
        queue[--front]=ele;
    }
}
void delete_rear()
{
    if(front==-1&&rear==-1)
    {
        printf("Queue empty \n");
    }
    else
    {
        printf("Element to delete %d \n",queue[rear]);
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            rear--;
        }
    }
}