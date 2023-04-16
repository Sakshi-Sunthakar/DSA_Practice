#include<stdio.h>
#include<stdlib.h>

struct node
{
    char ssn[25],name[25],dept[10],designation[25],phone_no[10];
    float sal;
    struct node *llink;
    struct node *rlink;
};
struct node *first=0,*head=0,*temp,*temp1;

int count=0;

void create()
{
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Employee details \n");
    printf("Enter SSN ,Name ,Department ,designation ,salary ,Phone no of employee\n");
    scanf("%s%s%s%s%f%s",head->ssn,head->name,head->dept,head->designation,&head->sal,head->phone_no);

    head->rlink=0;
    count++;
}
void insert_first()
{
    create();
    
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
    create();

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
void delete_first()
{
    if(first==0)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        temp=first;
        printf("Deleted element is %s \n",temp->ssn);
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
        printf("Deleted element is %s ",temp->ssn);
        temp->llink->rlink=0;
        free(temp);
    }
}
void display()
{
    int nodeno=1;

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
            printf("\n|%d| SSN:%s\tName:%s\tDepartment:%s\tDesignation:%s\tSalary%f\tPhone_no%s\n",nodeno,temp->ssn,temp->name,temp->dept,temp->designation,temp->sal,temp->phone_no);
            temp=temp->rlink;
            nodeno++;
        }
        printf("0\n");
        printf("NO of nodes are:%d",count);
    }
}
void demo_using_DEQ()
{
    int c;
    while(1)
    {
        printf("\nDemo double Ended Queue Operation\n");
        printf("\n1.insert_at_front\n2.delete_at_front\n3.insert_at_rear\n4.delete_at_rear\n5.Display\n6.exit");
        printf("Enter your choice\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:insert_first();
                    break;
            case 2:delete_first();
                    break;
            case 3:insert_last();
                    break;
            case 4:delete_last();
                    break;
            case 5:display();
                    break;
            case 6:return;
        }
    }
}
void main()
{
    int ch,i,n;

    while(1)
    {
        printf("\nMENU\n1.create DLL linked list \n2.Display\n3.insert_at_first\n4.insert_at_last\n5.delete_at_first\n6.delete_at_last\n7.demo_using_DEQ\n8.exit\n");
        printf("\nEnter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n Enter the no Employee\n");
                    scanf("%d",&n);
                    for(i=0;i<n;i++)
                    {
                        insert_last();
                    }
                    break;
            case 2:display();
                    break;
            case 3:insert_first();
                    break;
            case 4:insert_last();
                    break;
            case 5:delete_first();
                    break;
            case 6:delete_last();
                    break;
            case 7:demo_using_DEQ();
                    break;
            case 8:exit(0);
        }
    }
    

}