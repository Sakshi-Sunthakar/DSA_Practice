#include<stdio.h>
#include<stdlib.h>
struct NODE
{
    char usn[20],name[20],branch[20];
    int sem;
    long int phone_no;
    struct NODE *link;
};
struct NODE *first=0,*temp=0,*temp1,*head;

int count=0;

void create()
{

    head=(struct NODE *)malloc(sizeof(struct NODE));
    printf("Enter the USN,Name,Branch,Sem,Phone No of student \n");
    scanf("%s%s%s%d%ld",head->usn,head->name,head->branch,&head->sem,&head->phone_no);
    head->link=0;

    count++;
}
void insert_at_first()
{
    create();
    if(first==0)
    {
        first=head;
    }
    else
    {
        head->link=first;
        first=head;
    }
}
void insert_at_last()
{
    create();
    if(first==0)
    {
        first=head;
    }
    else
    {
        temp=first;
        while(temp->link!=0)
        {
            temp=temp->link;
        }
        temp->link=head;
    }
}
void delete_at_first()
{
    if(first==0)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        temp=first;
        printf("Deleted element is %s \n",temp->usn);
        first=first->link;
        free(temp);
        count--;
    }
}
void delete_at_last()
{
    if(first==0)
    {
        printf("Linked list is empty \n");
    }
    else
    {
        temp=first;
        while(temp->link!=0)
        {
            temp1=temp;
            temp=temp->link;
        }
        printf("Deleted element is %s ",temp->usn);
        temp1->link=0;
        free(temp);
        count--;
    }
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
        int nodeno=1;

        printf("student information is \n");
        while(temp!=0)
        {
            
            printf("\n||%d||",nodeno);
            printf("USN:%s\t",temp->usn);
            printf("NAME:%s\t",temp->name);
            printf("Branch:%s\t",temp->branch);
            printf("Sem:%d\t",temp->sem);
            printf("Phone_no:%ld\t",temp->phone_no);

            temp=temp->link;
            nodeno++;
        }
        printf("\n No of Nodes is %d\n",count);

    }
}
void main()
{
    int ch ,i,n;
    while(1)
    {
        printf("\nMENU\n1.create a linked list \n2.Display \n3.insert at first\n4.Inser at last\n5.Delete at first\n6.delete at last\n7.exit\n");
        printf("enter your choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n Enter the number of students\n");
                    scanf("%d",&n);
                    for(i=0;i<n;i++)
                    {
                        insert_at_last();
                    }
                    break;
            case 2:display();
                    break;
            case 3:insert_at_first();
                    break;
            case 4:insert_at_last();
                    break;
            case 5:delete_at_first();
                    break;
            case 6:delete_at_last();
                    break;
            case 7:exit(0);
        }
    }

}