//program to read and print array elements usings pointers
#include<stdio.h>
void main()
{
    int n,i,a[10],*ptr;

    printf("Enter the size\n");
    scanf("%d",&n);

    ptr=a;

    printf("Enter the array elements one by one \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }

    ptr=a;
    
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(ptr+i));
    }
}