//program to check weather the give character is vowel or consnant.
#include<stdio.h>
void  alpha(char ch);
void main()
{
    char ch;
    printf(" Enter the character\n");
    scanf("%c",&ch);
    alpha(ch);
}
void alpha(char ch)
{
    switch(ch)
    {
        case'a':printf("%c is a vowel\n ",ch);
                break;
        case'e':printf("%c is a vowel\n ",ch);
                break;
        case'i':printf("%c is a vowel\n ",ch);
                break;
        case'o':printf("%c is a vowel \n",ch);
                break;
        case'u':printf("%c is a vowel\n ",ch);
                break;
        default:printf("%c is a consonant",ch);
    }
}