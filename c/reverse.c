//program to reverse the array elements.

#include<stdio.h>

void main()
{
    int n,i,a[10],b[10];

    printf("Enter the size of array \n");
    scanf("%d",&n);

    printf("Enter the elements of array \n");
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("reversed elements are\n");
    for(i=n-1;i>=0;i--)
    {
        b[i]=a[i];
        printf("%d  ",b[i]);
    }
}