//Program to check weather person is aligible to vote or not.
#include<stdio.h>

int age( int num);
void main()
{
    int num;
    printf("Age=");
    scanf("%d",&num);
    age(num); 
}
int age (int num)
{
    if(num>18)
    {
        printf(" Person is aligible to vote \n");
    }
    else
    {
        printf("person is not aligible to vote\n");
    }
    return 0;
}