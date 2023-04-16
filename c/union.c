#include<stdio.h>
#include<stdlib.h>

union test
{
    int x;
    float y;
    char ch[10];
};

union test d;

void main()
{
    d.x=10;
    d.y=6.77;
    gets(d.ch);
    
    printf("%d\t%f\t%s\t",d.x,d.y,d.ch);
}