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
struct NODE *first=0,*head,*temp;
int key;
void create();
void display();
void insert_first();
void insert_last();
void insert_before_position();
void insert_after_position();
void delete_first();
void delete_last();
void delete_position();
void main()
{
    int ch;
    while(1)
    {
        printf("\n__Linked list__\n");
        printf("1.create\n2.display\n3.Insert_first\n4.Insert_last\n5.Insert_before_position\n6.Insert_after_position\n7.delete_first\n8.delete_last\n9.delete_postion\n10.exit\n");
        printf("Enter ur choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();
                    break;
            case 2:display();
                    break;
            case 3:insert_first();
                    break;
            case 4:insert_last();
                    break;
            case 5:insert_before_position();
                    break;
            case 6:insert_after_position();
                    break;
            case 7:delete_first();
                    break;
            case 8:delete_last();
                    break;
            case 9:delete_position();
                    break;
            case 10:exit(0);
        }
    }
}
void create()
{
    int c;

    do
    {
        head=(struct NODE *)malloc(sizeof(struct NODE));
        printf("Enter the value \n");
        scanf("%d",&head->data);
        if(first==0)
        {
            first=temp=head;
            temp->llink=temp->rlink=0;
        }
        else
        {
            temp->rlink=head;
            head->llink=temp;
            temp=head;
        }
        printf("Do u want to continue (0,1) \n");
        scanf("%d",&c);

    }while(c);

    temp->rlink=NULL;

}
void display()
{

    if(first==0)
    {
        printf("Linked list is empty \n");
    }
    else
    {
        temp=first;
        printf("Elements of doubly linked list are\n");
        while(temp!=0)
        {
        printf("%d->",temp->data);
        temp=temp->rlink;
        }

        printf("0\n");
    }
}
void insert_first()
{
    head=(struct NODE*)malloc(sizeof(struct NODE*));
    printf("Enter the Data \n");
    scanf("%d",&head->data);
    
    head->llink=NULL;
    if(first==0)
    {
        first=temp=head;
        head->llink=head->rlink=0;
    }
    else
    {
        head->rlink=first;
        first->llink=head;
        first=head;
    }
    
}
void insert_last()
{
    head=(struct NODE*)malloc(sizeof (struct NODE*));
    printf("Enter the data \n");
    scanf("%d",&head->data);
    head->rlink=0;
    if(first==0)
    {
        first=temp=head;
        head->llink=head->rlink=0;
    }
    else
    {
        temp=first;
        while(temp->rlink!=0)
        {
            temp=temp->rlink;
        }
        temp->rlink=head;
        head->llink=temp;
    }
}
void insert_before_position()
{
    head=(struct NODE*)malloc(sizeof (struct NODE*));
    printf("Enter the data \n");
    scanf("%d",&head->data);
    
    printf("Enter the key element\n");
    scanf("%d",&key);

    if(first==0)
    {
        printf("Linked empty\n");
    }
    else
    {
        temp=first;
        while(temp->data!=key && temp!=0)
        { 
            temp=temp->rlink;
        }
        if(temp->data==key)
        {
            temp->llink->rlink=head;
           head->llink=temp->llink;
           head->rlink=temp;          
           temp->llink=head;
        }
        else
        {
            printf("Key not found\n");
        }
    }
}
void insert_after_position()
{
    head=(struct NODE*)malloc(sizeof (struct NODE*));
    printf("Enter the data \n");
    scanf("%d",&head->data);
    
    printf("Enter the key element\n");
    scanf("%d",&key);

    if(first==0)
    {
        printf("Linked empty\n");
    }
    else
    {
        temp=first;
        while(temp->data!=key && temp!=0)
        { 
            temp=temp->rlink;
        }
        if(temp->data==key)
        {
            temp->rlink->llink=head;
            head->rlink=temp->rlink;
           temp->rlink=head;
           head->llink=temp;
           
        }
        else
        {
            printf("Key not found\n");
        }
    }
}
void delete_first()
{
    if(first==0)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        temp=first;
        printf("Deleted element is %d \n",temp->data);
        first=first->rlink;
        free(temp);
    }
}
void delete_last()
{
    if(first==0)
    {
        printf("Linked list is empty \n");
    }
    else
    {
        temp=first;
        while(temp->rlink!=0)
        {
            temp=temp->rlink;
        }
        printf("Deleted element is %d ",temp->data);
        temp->llink->rlink=0;
        free(temp);
    }
}
void delete_position()
{
    if(first==0)
    {
        printf("Linked list is empty \n");
    }
    else
    {
        printf("Enter the key element \n");
        scanf("%d",&key);
        temp=first;
        while(temp->data!=key && temp->rlink!=0)
        {
            temp=temp->rlink;
        }
        if(temp==0)
        {
            printf("Key not found\n");
        }
        else
        {
            if(temp->rlink==0)
            {
                temp->llink->rlink=0;
            }
            else
            {
                temp->llink->rlink=temp->rlink;
                temp->rlink->llink=temp->llink;
            }
            free(temp);
        }
    }
}