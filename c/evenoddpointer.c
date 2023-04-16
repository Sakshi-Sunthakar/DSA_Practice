//program to add even number of array usings pointer.
#include<stdio.h>
void main()
{
    int n,i,a[10],even=0,odd=0,*ptr;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    ptr=a;
    printf("Enter the elements one by one \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        if(*ptr%2==0)
        {
          even=even+*ptr;
        }
        
        ptr++;
    }
    ptr=a;
    printf("%d\t",even);

    for(i=0;i<n;i++)
    {
        if(*ptr%2!=0)
        {
            odd=odd+*ptr;
        }
        
        ptr++;
    }

    printf("%d",odd);
}