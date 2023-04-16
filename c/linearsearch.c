#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,a[10],n,key;

    printf("Enter the size of array\n");
    scanf("%d",&n);

    printf("Enter the array elements one by one\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the key element \n");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("Array is found at %d th position \n",i+1);
            printf("search is succesfull\n");
            exit(0);
        
        }
        
    }
    printf("key is not found \n");
    printf("search is unsuccesfull\n");
}