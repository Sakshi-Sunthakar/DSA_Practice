#include<stdio.h>


void main()
{
    FILE *fp=NULL;

     int roll_no;
    char USN[10],name[10];
    float avg_mark;

    printf("Enter the Name,roll_no,USN,avg_mark\n");
    scanf("%s%d%s%f",name,&roll_no,USN,&avg_mark);

    fp=fopen("Studentinfo.text","w");

    if(fp==NULL)
    {
		printf("Error!");
		exit(1);
	}

    fprintf(fp,"%s%d%s%f\n",name,roll_no,USN,avg_mark);

    fclose(fp);

    fp=fopen("studentinfo.text","r");

    fscanf(fp,"%s%d%s%f",name,&roll_no,USN,&avg_mark);

    printf("Student information \n");

    printf("Name\troll_no\tUSN\tavg_mark\t");

    printf("\n%s\t%d\t%s\t%f\n",name,roll_no,USN,avg_mark);

    fclose(fp);


}