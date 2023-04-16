//c program for dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,m,i,*ptr,*ptr1;
    printf("Enter the size\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the m\n");
    scanf("%d",&m);
    realloc(ptr,m);
    printf("Enter the elements one by one \n");
    ptr1=ptr;
    for(i=0;i<m;i++)
    {
        scanf("%d",(ptr+i));
    }
    ptr=ptr1;
    for(i=0;i<m;i++)
    {
        printf("%d\n ",*(ptr+i));
    }
    free(ptr);
}