//programme to convert degree into radian .
#include<stdio.h>
void main()
{
    int i;
    float degree,rad,term,nume,sum=0,demo;
    printf(" Enter the degree \n");
    scanf(" %f ",&degree);
    rad=degree*(3.142/180);
    i=2;
   do
   {
      term=nume/demo;
      nume=-nume*(rad*rad);
      demo=demo*(i)*(i+1);
      sum=sum+term;
      i+=2; /* code */
   } while ( term>0.00001/* condition */);
   
   printf(" %f ",sum); 
}
    