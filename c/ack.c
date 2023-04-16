//ackerman's function
#include<stdio.h>


int ack(int m,int n)
{
    if(m==0)
    {
        return n+1;
    }
    else if((m>0) && (n==0))
    {
        return ack(m-1, 1);
    }
    else if((m>0) && (n>0))
    {
        return ack(m-1, ack(m,n-1));
    }
}

int main()
{
    int a,n,m;

    printf("m=");
    scanf("%d",&m);

    printf("n=");
    scanf("%d",&n);

    
    a=ack(m,n);
    
    printf("Acker values %d",a);

    
    return 0;

}