//Program to check pointers.
#include<stdio.h>

void main()
{
    int a,b,*ap,*bp;
    printf("Enter the values \n");
    scanf("%d%d",&a,&b);
    ap=&a;
    bp=&b;
    printf("%d\n%d\n",a,b);
    printf("%p\n%p\n",&a,&b);
    printf("%d\n%d\n",*ap,*bp);
    printf("%d\n%d\n",ap,bp);
    printf("%p\n%p\n",&ap,&bp);
}