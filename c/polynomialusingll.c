//Addition of Two polynomails usings linked list
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node
{
    float coeff;
    int expo;
    struct node *link;Da
};
struct node *temp,*head,*head1,*head2,*head3,*first=0;

void create()
{
    int term,i;

    printf("Enter the no of terms\n");
    scanf("%d",&term);
    for(i=0;i<term;i++)
    {
        head=(struct node*)malloc(sizeof(struct node*));

        printf("coefficent of the exponent of %d term\n ");
        scanf("%f %d",&head->coeff,&head->expo);

        insert(head);
    }

}
void insert(struct node* head)
{
    if(first==0)
    {
        first=temp=head;
    }
    if(first->expo<head->expo)
    {
        while(temp->link!=first)
        {
            temp=temp->link;
        }  
        temp->link=head;
        head->link=first;
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
void print()
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
        printf("%f^%d\t ",temp->coeff,temp->expo);
        temp=temp->link;
        }

        printf("%f^%d\n",temp->coeff,temp->expo);
    }
}
void polyadd()
{
    struct node* ptr1=head1;
    struct node* ptr2=head2;
    while(ptr1!=NULL&&ptr2!=NULL)
    {
        if(ptr1->expo==ptr2->expo)
        {
            head3=insert(head3,ptr1->coeff+ptr2->coeff,ptr1->expo);
        }
        else if(ptr1->expo>ptr2->expo)
        {
            head3=insert(head3,ptr1->coeff+ptr1->coeff,ptr1->expo);
        }
        else if(ptr2->expo>ptr2->expo)
        {
            head3=insert(head3,ptr2->coeff+ptr2->coeff,ptr2->expo);
        }
    }
    while(ptr1!=NULL)
    {
        head3=insert(head3,ptr1->coeff,ptr1->expo);
        ptr1=ptr1->link;
    }
    while(ptr2!=NULL)
    {
        head3=insert(head3,ptr2->coeff,ptr2->expo);
        ptr1=ptr1->link;
    }

    printf("\nAdded polynomial\n");
    print(head3);

}
void main()
{
    printf("\nThe first polynomial \n");
    head1=create();
    printf("\nThe second polynomial \n");
    head2=create();
}