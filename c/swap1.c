//program to swap to number
#include<stdio.h>
void swap(int a,int b);
void main()
{
    int a, b;
    printf("Enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    swap(a,b);
}
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping value are \n");
    printf("a=%d\tb=%d",a,b);
}