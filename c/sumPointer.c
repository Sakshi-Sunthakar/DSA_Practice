//program to add even number of array usings pointer.
#include<stdio.h>
void main()
{
    int n,i,a[10],sum=0,*ptr;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    ptr=a;
    printf("Enter the elements one by one \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*ptr;
        ptr++;
    }
    printf("%d",sum);
}