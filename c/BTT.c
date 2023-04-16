#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *llink,*rlink;
};
typedef struct node *NODE;
NODE root=0,head,temp;

NODE create()
{
    temp=(NODE*)malloc(sizeof(struct node));
    temp->llink=0,temp->rlink=0;
    return temp;
}

void insert(NODE root,NODE head)
{
    if(head->data<root->data)
    {
        if(root->llink==NULL)
        {
            root->llink=head;
        }
        else
        {
            insert(root->llink,head);
        }
    }

    if(head->data>root->data)
    {
        if(root->rlink==NULL)
        {
            root->rlink=head;
        }
        else
        {
            insert(root->rlink,head);
        }
    }
    
}
void preorder(NODE root)
{ 
    if(root!=0)
    {
        printf("%d\t",root->data);
        preorder(root->llink);
        preorder(root->rlink);
    }
}
void inorder(NODE root)
{

    if(root!=0)
    {
        inorder(root->llink);
        printf("%d\t",root->data);
        inorder(root->rlink);
    }
}
void postorder(NODE root)
{
    if(root!=0)
    {
        postorder(root->llink);
        postorder(root->rlink);
        printf("%d\t",root->data);
    }
}

void main()
{
    int n,i,ch,val;

    while(1)
    {

        printf("\nBST MENU\n");
        printf("\n1.Create BST \n2.BST Traversal\n 3.Exit");
        printf("\nEnter your choice \n");
        scanf("%d",&ch);
        switch(ch)
        {

        
            case 1:printf("Enter the value of n=");
                    scanf("%d",&n);

                    for(i=1;i<=n;i++)
                    {   
                        head=create();
                        printf("Enter the data :");
                        scanf("%d",&val);
                        head->data=val;
                        if(root==NULL)
                        {
                            root=head;
                        }
                        else
                        {
                            insert(root,head);
                        }
                    }
                    break;
            case 2:printf("\nPreorder traversal is:");
                    preorder(root);

                    printf(" \ninorder traversal is");
                    inorder(root);

                    printf("\n Postorder traversal is");
                    postorder(root);
                    break;

            case 3:exit(0);
        }
    }

}
