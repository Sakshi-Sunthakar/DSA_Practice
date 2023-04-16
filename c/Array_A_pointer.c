//Program to Add to array elements using pointers.
#include<stdio.h>

void read_array(int x[],int m);
void print_array(int x[],int m);
void add_array(int x[],int y[],int z[],int m);

void main()
{
    int n,i,a[10],b[10],c[10];

    printf("n=");
    scanf("%d",&n);

    printf("Enter the elements of A\n");
    read_array(a,n);
    printf("Enter the elements of B\n");
    read_array(b,n);
    add_array(a,b,c,n);
    printf("\nElements of A\n");
    print_array(a,n);
    printf("\nElements of B\n");
    print_array(b,n);
    printf("\nSum\n");
    print_array(c,n);
    
}
void read_array(int x[],int m)
{
    int* ptr,i;
    ptr=x;
    for(i=0;i<m;i++)
    {
        scanf("%d",(ptr+i));
    }
}
void print_array(int x[],int m)
{
    int* ptr,i;
    ptr=x;
    for(i=0;i<m;i++)
    {
        printf("%d ",(*ptr++));
    }
}
void add_array(int x[],int y[],int z[],int m)
{
    int *ptx,*pty,*ptz,i;
    ptx=x;
    pty=y;
    ptz=z;

    for(i=0;i<m;i++)
    {
        *ptz=*ptx+*pty;
        ptz++;
        ptx++;
        pty++;
    }
}