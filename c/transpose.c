//Transpose of matrix 
#include<stdio.h>
void main()
{
    int i,j,n,m,a[10][10],b[10][10];

    printf("Enter the number of rows\n");
    scanf("%d",&n);
    printf("Enter the number of columns \n");
    scanf("%d",&m);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           b[j][i]=a[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d  ",b[i][j]);
        }
        printf("\n");
    }

}