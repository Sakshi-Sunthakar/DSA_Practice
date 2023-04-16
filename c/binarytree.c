//Binary tree 
#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data ;

    struct node *lchild;

    struct node *rchild;
};

typedef struct node *NODE;

NODE root,head=0,temp=0;

NODE lchild=NULL,rchild=NULL;

void preorder(NODE root)
{ 
    if(root!=0)
    {
        printf("%c",root->data);
        preorder(root->lchild);
        preorder(root->rchild);
    }
}
void inorder(NODE root)
{

    if(root!=0)
    {
        inorder(root->lchild);
        printf("%c",root->data);
        inorder(root->rchild);
    }
}
void postorder(NODE root)
{
    if(root!=0)
    {
        postorder(root->lchild);
        postorder(root->rchild);
        printf("%c",root->data);
    }
}


NODE *create(char val)
{
    head=(struct node*)malloc(sizeof(struct node));

    head->data=val;

    head->lchild=NULL,head->rchild=NULL;

    return head;
} 
int main()
{
    root=create('A');

    root->lchild=create('B');

    root->rchild=create('C');

    root->lchild->lchild=create('D');

    root->lchild->rchild=create('E');

    root->rchild->lchild=create('F');

    root->rchild->rchild=create('G');

    printf("\n Preorder traversal is\n");
    preorder(root);

    printf("\n inorder traversal is\n");
    inorder(root);

    printf("\n Postorder traversal is\n");
    postorder(root);
}