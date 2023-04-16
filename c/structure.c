//basic structure
#include<stdio.h>

struct student 
    {
        char name[10];
        int roll_no;
        float avg;
    }s[10];

void main()
{
    int i,n;
    scanf("%d",&n);
    
   for(i=1;i<=n;i++)
   {
       printf("Enter the informtion of student %d\n",i);
        printf("Name\tR_no\tFees\n");
       scanf("%s%d%f",s[i].name,&s[i].roll_no,s[i].avg);
   }
   printf("Informtion of students\n");
   printf("Name\tR_no\tFees\n");
   for(i=1;i<=n;i++)
   {
       printf("%s\t%d\t%.3f\n",s[i].name,s[i].roll_no,s[i].avg);
   }

}