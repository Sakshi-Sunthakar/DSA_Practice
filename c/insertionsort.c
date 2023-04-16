//program to for insertion sort .

#include<stdio.h>
#include<stdlib.h>

void sort(int arr[],int n,int key);
void main()
{
    int arr[10],n,key,i,j;

    printf("Enter the size of array elements\n");
    scanf("%d",&n);

    printf("Enter the array elements one by one \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    sort(arr,n,key);

    printf("Enter the array elements one by one \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void sort(int arr[],int n,int key)
{
    int i,j;

    for(i=1;i<n;i++)
    {
        j=i-1;

        key=arr[i];

        while(key<arr[j]&&j>=0)
        {
            arr[j+1]=arr[j];
            --j;
        }

        arr[j+1]=key;
    }

}