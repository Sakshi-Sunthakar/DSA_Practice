//program to cheak weather the given year is leap or not.
#include<stdio.h>
void Leap_year();
void main()
{
    Leap_year();
}
void Leap_year()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);

    if(year%400==0||year%4==0 && year%100!=0)
    {
        printf("Year is leap year\n");
    }
    else
    {
        printf("Year is not a leap year \n");
    }
}