//program to find the principle diagonal elements
#include<stdio.h>
void main()
{
    int n,m,i,j,a[10][10];
    printf("Enter the size of array \n");
    scanf("%d",&n);
    printf("Enter the size of array \n");
    scanf("%d",&m);

    printf("Enter the elements one by one\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    if(n==m)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i==j)
                {
                    printf("%d\t",a[i][j]);
                }

            }
        }
        printf("\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i+j==n-1)
                {
                    printf("%d\t",a[i][j]);
                }

            }
        }
    }
    else
    {
        printf("NOT A square matrix\n");
    }
   

}