#include<stdio.h>

struct student 
{
    int roll_no;
    char USN[10],name[10];
    float avg_mark;
}s[10];

void main()
{
    FILE *fp=NULL;
    int i,n;
    
    printf("Enter the Number of students \n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the Name,roll_no,USN,avg_mark\n");
        scanf("%s%d%s%f",s[i].name,&s[i].roll_no,s[i].USN,&s[i].avg_mark);
    }

    fp=fopen("Studentinfo.text","w");

    if(fp==NULL)
    {
		printf("Error!");
		exit(1);
	}

    for(i=0;i<n;i++)
    {
        fprintf(fp,"%s%d%s%f\n",s[i].name,s[i].roll_no,s[i].USN,s[i].avg_mark);
    }
    fclose(fp);

    fp=fopen("studentinfo.text","r");

    for(i=0;i<n;i++)
    {
        fscanf(fp,"%s%d%s%f",s[i].name,&s[i].roll_no,s[i].USN,&s[i].avg_mark);

        printf("Student information %d \n",i+1);

        printf("Name\troll_no\tUSN\tavg_mark\t");

        printf("\n%s\t%d\t%s\t%f\n",s[i].name,s[i].roll_no,s[i].USN,s[i].avg_mark);
    }

    fclose(fp);


}