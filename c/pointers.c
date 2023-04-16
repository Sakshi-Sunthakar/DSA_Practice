//program to check pointers.
#include<stdio.h>
void main()
{
    int a,*p,**q;
    scanf("%d",&a);
    p=&a;
    q=&p;
    printf("a=%d\n",a);
    printf("&a=%p\n",&a);
    printf("*p=%d\n",*p);
    printf("p=%p\n",p);
    printf("q=%d\n",q);
    printf("*q=%d\n",*q);
    printf("**q=%d\n",**q);
}
