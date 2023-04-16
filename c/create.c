//doubly linked list 
#include<stdio.h>
#include<stdlib.h>

struct NODE
{
    int data;
    struct NODE *llink;
    struct NODE *rlink;
};
struct NODE node;
struct NODE *first=0,*head,*temp,*temp1;
int key;
void create();
void main()
{
    int ch;
    do
    {
        printf("\n__Linked list__\n");
        printf("1.create\n2.exit\n");
        printf("Enter ur choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();
                    break;
            case 2:exit(0);
        }
    }while(ch);
}

void create()
{
    int  ch;

    while(1)
    {
        head=(struct NODE *)malloc(sizeof(struct NODE));
        printf("Enter the value \n");
        scanf("%d",&head->data);
        if(first==0)
        {
            first=head;
            head->llink=head->rlink=head;
        }
        else
        {
            temp->rlink=head;
            head->llink=temp;
            temp=head;
        }
        fflush(stdin);
        printf("Do u want to continue (0,1) \n");
        scanf("%d",&ch);
        
    }
    temp->rlink=first;
}
