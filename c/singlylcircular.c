//Singly circurlar  linked list 
#include<stdio.h>
#include<stdlib.h>

struct NODE
{
    int data;
    struct NODE *link;
};
struct NODE node;
struct NODE *first=0,*head,*temp,*temp1;
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
        printf("1.create\n2.display\n3.Insert_first\n4.Insert_last\n5.Insert_before_position\n6.insert_after_position7.delete_first\n8.delete_last\n9.delete_postion\n10.exit\n");
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
        }
        else
        {
            temp->link=head;
            temp=head;
        }
        
        printf("Do u want to continue (0,1) \n");
        scanf("%d",&c);

    }while(c);

    temp->link=first;

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
        printf("Elements of singly circular linked list are\n");
        while(temp->link!=first)
        {
        printf("%d\t ",temp->data);
        temp=temp->link;
        }

        printf("%d\n",temp->data);
    }
}
void insert_first()
{
    head=(struct NODE*)malloc(sizeof(struct NODE*));
    printf("Enter the Data \n");
    scanf("%d",&head->data);

    if(first==0)
    {
        first=head;
    }
    else
    {
        temp=first;
        while(temp->link!=first)
        {
            temp=temp->link;
        }  
        temp->link=head;
        head->link=first;
        first=head;
    }
    
}
void insert_last()
{
    head=(struct NODE*)malloc(sizeof (struct NODE*));
    printf("Enter the data \n");
    scanf("%d",&head->data);
    head->link=0;
    if(first==0)
    {
        first=head;
    }
    else
    {
        temp=first;
        while(temp->link!=first)
        {
            temp=temp->link;
        }
        temp->link=head;
        head->link=first;
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
        
        while(temp->data!=key)
        {
            temp1=temp;
            temp=temp->link;
        }
        if(temp->data==key)
        {
            temp1->link=head;
            head->link=temp;
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
        while(temp->data!=key )
        {
           
            temp=temp->link;
        }
        if(temp->data==key)
        {
           head->link=temp->link->link;
           temp->link=head;
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
        temp=temp1=first;
        if(temp->link==first)
        {
            printf("Deleted element is %d \n",first->data);
            free(first);
            first=0;
        }
        else
        {
            temp=temp1=first;
            while(temp->link!=first)
            {
                temp=temp->link;
            }
            printf("Deleted element is %d \n",first->data);
            first=first->link;
            temp->link=first;
            free(temp1);
        }
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
        if(temp->link==first)
        {
            printf("Deleted element is %d ",temp->data);
            free(first);
            first=0;
        }
        else
        {
            while(temp->link!=first)
            {
                temp1=temp;
                temp=temp->link;
            }
            printf("Deleted element is %d ",temp->data);
            temp1->link=first;
            free(temp);
        }
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
        while(temp->data!=key && temp->link!=first)
        {
            temp1=temp;
            temp=temp->link;
        }
        if(temp->data==key)
        {
            if(temp->link==first)
            {
                temp1->link=first;
            }
            else
            {
                temp1->link=temp->link;
            }
            free(temp);
        }
        else
        {
            printf("Key not found\n");
        }
    }
}