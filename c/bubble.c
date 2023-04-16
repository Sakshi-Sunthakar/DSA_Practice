//Program to sort array elements using bubble sort method.
#include<stdio.h>

void main()
{

    int n,i,j,temp,a[100];

    printf(" Enter the values of order of arrays \n ");
    scanf("%d",&n);

    printf(" Enter the array elements one by one \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf(" Unsorted elements are \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }

    for(i=0;i<n-1;i++)
    {

        for(j=0;j<(n-i-1);j++)
        {

            if(a[j]>a[j+1])
            {

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }

        }

    }

    printf("\n The sorted array elements \n");
    for(i=0;i<n;i++)
    {

        printf("%d\t",a[i]);

    }

}