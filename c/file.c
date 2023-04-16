#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;

    char str[10];

    int i;

    fp=fopen("acb.text","w");

    if(fp==NULL)
    {
        printf("ERROR\n");
        exit(1);
    
    }

    printf("Enter the string \n ");
    
    gets(str);

    fputs(str,fp);

    fclose(fp);
}