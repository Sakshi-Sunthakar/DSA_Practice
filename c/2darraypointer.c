//program to print 2D array elements usings pointer
#include<stdio.h>
void pointer();
void main()
{
   pointer();
}
void pointer()
{
    int n,a[100][100],i,j,*ptr,*ptr1;
    
    printf("Enter the size of array\n");
    scanf("%d",&n);
    
    ptr=a[0][0];   
    printf("Enter the array elements one by one\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",(*(ptr+i)+j));
        }
    }
      
    printf("Array elements are \n");
    

    for(i = 0; i < n; i++)
        {
            printf("Address of %d th array %u \n",i , *(ptr + i));
            for(j = 0; j < n; j++)
            {
                printf("arr[%d][%d]=%d\n", i, j, *( *(ptr + i) + j) );
            }
            printf("\n\n");
        }
}