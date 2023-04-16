//program to search a key element using binary search method.
#include<stdio.h>
#include<stdlib.h>

void main()
{

    int n,i,a[10],key,found,mid,low,high;
    printf(" Enter the order of array \n ");
    scanf(" %d",&n);
    printf(" Enter the array elements one by one \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" Enter the key element to searched \n ");
    scanf("%d",&key);

    low=0;
    high=n-1;

    while(low<=high)
    {
            mid=(low+high)/2;

            if(key==a[mid])
            {

                printf(" The search is succesfull and the element is found at the position of %d",mid+1);
                exit(0);
            }

            if(key>a[mid])
            {

                low=mid+1;

            }
            else
            {
                high=mid-1;

            }

    }

    printf(" Unsuccesful search \n");

}
