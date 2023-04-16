//Program to print multiplication of matrix .
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,m,p,q,i=0,j=0,k=0,a[10][10],b[10][10],c[10][10];
    printf(" Enter the order of matrix A\n");
    scanf("%d%d",&m,&n);
    printf(" Enter the order of matrix B \n");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf(" Matrix multiplication is not possible \n ");
    }
    printf(" Enter the elementsof matrix A \n ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements ofmatrix B \n ");
    for (i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {

         for(j=0;j<q;j++)
             {
                 c[i][j]=0;

                    for(k=0;k<n;k++)
                        {
                         
                            c[i][j]=c[i][j]+a[i][k]*b[k][j];
                         
                        }
             }
    }
    printf(" Product of matrix A and B ::\n ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
    

}