//program to print and add only even numbers.
#include<stdio.h>
void print_even(int n);

void main()
{

    int n,i,sum=0;
    printf("Enter the value  n\n");
    scanf("%d",&n);
    print_even(n);
     
}
void print_even( int n)
{
   
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            continue;   
        }
        sum=sum+i;
        printf("%d\t",i);
        
    }
    printf("\n%d",sum);
     
}


 