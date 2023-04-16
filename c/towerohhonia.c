//Tower of honai 
#include<stdio.h>
void move_disk(int n,char source,char destination,char temp);
void main()
{
    int n;
    printf("How may disks\n");
    scanf("%d",&n);
    move_disk(n,'s','d','t');
}
void move_disk(int n,char source,char destination,char temp)
{
    if(n>0)
    {
        move_disk(n-1,source ,temp ,destination);
        printf("move disk %d form %c to %c \n",n,source,destination);
          move_disk(n-1,temp,destination,source);
    }
}