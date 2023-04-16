#include <stdio.h>
#include <string.h>

int main()
{
  	char Str1[100], Str2[100],*sptr1,*sptr2;
  	int result, i;
 
  	printf("\n Enter the First String : ");
  	scanf("%s",Str1);
  	
  	printf("\n Enter the Second String : ");
    scanf("%s",Str2);
  	
    sptr1=Str1;

    sptr2=Str2;

  	for(; *sptr1 == *sptr2 || *sptr1 == '\0'; sptr1++,sptr2++);
		   
  	if(*sptr1 < *sptr2)
   	{
   		printf("\n str1 is Less than str2=-1");
	}
	else if(*sptr1> *sptr2)
   	{
   		printf("\n str2 is Less than str1=1");
	}
	else
   	{
   		printf("\n str1 is Equal to str2=0");
	}
  	
  	return 0;
}
