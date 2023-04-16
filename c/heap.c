//c program for dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*ptr,*ptr1;
    printf("Enter the size\n");
    scanf("%d",&n);
    ptr=new int[n];
    
    printf("Enter the elements one by one \n");
    ptr1=ptr;
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    ptr=ptr1;
    for(i=0;i<n;i++)
    {
        printf("%d ",(*ptr+i));
    }
}