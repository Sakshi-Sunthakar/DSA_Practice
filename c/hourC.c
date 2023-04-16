//program to covert given sec in hour and min,sec.
#include<stdio.h>

void main()
{
    int n,day,hour,min,sec;
    printf("n=");
    scanf("%d",&n);
    day=n/(24*3600);
    n=n%(24*3600);
    hour=n/3600;
    n=n%3600;
    min=n/60;
    n=n%60;
    sec=n;
    printf("%d\n%d\n%d\n%d",day,hour,min,sec);
}