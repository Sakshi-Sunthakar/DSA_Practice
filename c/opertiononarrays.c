//Program to design a menu card of create,delete,insert and display array elements .
#include<stdio.h>
#include<stdlib.h>
int a[10],n;

//1.reading arrays.
void create()
{
    printf("Enter the size of array elements\n");
    scanf("%d",&n);
    
    printf("Enter the array elements one by one\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

//2.printing arrays.
void display()
{
  
    printf("Array elements are\n");
    for(int i=0;i<n;i++)
    {
       printf("%d\t",a[i]);
    }
}

//3.inserting an array element.
void insert()
{
    int pos,ele;
    printf("Enter the position where the element is to be inserted  \n");
    scanf("%d",&pos);

    printf("Enter the element  to be inserted  \n");
    scanf("%d",&ele);

   
    if(pos>=n+1||pos<=0)
    {
        printf("Invalid position \n");
    }
    else
    {
        for(int i=n-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=ele;
        n=n+1;
    }
}

//4.deleting an element.
void delete()
{
    int pos;
    printf("Enter the position where the element is to be deleted  \n");
    scanf("%d",&pos);

    if(pos>=n+1||pos<=0)
    {
        printf("Invalid position \n");
    }
    else
    {
        for( int i=pos-1;i<=n-1;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\n--Array opertion--\n");
        printf("1.create\n2.Display\n3.Insert\n4.Delete\n5.exit\n");
        printf("Enter the choice \n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:create();
                    break;
            case 2:display();
                    break;
            case 3:insert();
                    break;
            case 4:delete();
                    break;
            case 5:exit(0);
                    break;
            default:printf("Invalid choice \n");
                    
        }
    }
    return 0;
}