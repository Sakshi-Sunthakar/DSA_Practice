#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k)
{      
    int mix_and=0;
    int mix_or=0;
    int mix_xor=0;
     int x,z,y;
    for(int i=1;i<=n;i++)
    {
       
        for(int j=i+1;j<=n;j++)
        {
           
           x=i&j;
           
           y=i|j;
           
           z=i^j;
           
            
           if(x<k && x>mix_and) 
           {
               mix_and=x;
           }
           
    
           if(y<k && y>mix_or) 
           {
               mix_or=y;
           }

           
           if(z<k && z>mix_xor) 
           {
               mix_xor=z;
           }
        }
        
    }              
    printf("%d\n%d\n%d\n",mix_and,mix_or,mix_xor);                                 
}

int main()
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
