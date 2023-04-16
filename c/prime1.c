// prime number

#include<stdio.h>

void main()
{
    int i,flag=0,num;

    printf("Enter the number\n");
    scanf("%d",&num);

    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("prime number\n");
    }
    else
    {
        printf("not a prime number\n");
    }
}