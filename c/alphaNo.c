//Program to check weather the give number is alphabet or number.
#include<stdio.h>

void alphano(char ch );
void main()
{
    char ch;
    printf("Enter the charater \n");
    scanf("%c",&ch);
    alphano(ch);
}
void alphano(char ch)
{
    if((ch>='a'&&'z'<=ch)||(ch>='A'&&'Z'<=ch))
    {
        printf("Charater is alphabet\n");
    }
    else
    {
        printf("it's a number \n");
    }
}