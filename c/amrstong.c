//Program to check wearther the given number is amrstrong or not.
#include<stdio.h>
#include<math.h>

int amrstrong(int num);

void main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    amrstrong(num);
}

int amrstrong (int num)
{
    int rem,sum=0,temp;
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum+=rem*rem*rem;
        num=num/10;  
    }
    
    if(sum==temp)
    {
        printf("Number is a armstrong \n");
    }
    else
    {
        printf("number is not an armstrong\n");
    }
}