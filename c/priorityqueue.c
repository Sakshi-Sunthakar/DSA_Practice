//priority queue.
#include<stdio.h>
#include<stdlib.h>

#define max_size 5

int pq[5],i,j,rear=-1,front=-1,ele;

void Enqueue(int ele);
void Dequeue(int ele);
void pq_display();
void check(int ele);
void main()
{
    int ch;
    do
    {
        printf("\n___priority__queue___\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the value \n");
                    scanf("%d",&ele);
                    Enqueue(ele);
                    break;
            case 2: printf("Enter the value \n");
                    scanf("%d",&ele);
                    Dequeue(ele);
                    break;
            case 3:pq_display();
                    break;
            case 4:exit(0);
        }
    }
    while(ch!=4);
}
void Enqueue(int ele)
{
    if(rear==max_size-1)
    {
        printf("Queue is full\n");
    }
    if(rear==-1)
    {
        
        pq[++rear]=ele;
        
        if(front==-1)
        {
            front=0;
        }
    }
    else
    {
        check(ele);
        rear++;
    }
}
void Dequeue(int ele)
{
    if(front==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Element to deleted is %d ",pq[front]);
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
void check(int ele)
{
    for(i=0;i<=rear;i++)
    {
        if(ele>=pq[i])
        {
            for(j=rear+1;j>i;j--)
            {
                pq[j]=pq[j-1];
            }
            pq[i]=ele;
            return;
        }
    }
}
void pq_display()
{
    if(front==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",pq[i]);
        }
    }
}