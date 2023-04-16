#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>

int main() {

    int s[10];
    for(int i=0;i<10;i++)
    {
        s[i]=0;
    }
    char str[10];
    scanf("%s",str);
    int len=strlen(str);
    int count=0,j=-1;
    
    for(int i=0;i<len;i++)
    {
        if(str[i]>='0'&& str[i]<='9' && (int)(str[i]-'0')!=j)
        {
            count=0;
            count++;
            int j=(int)(str[i]-'0');
            
            for(int k=i+1;k<len+1;k++)
            {
                if(j==(int)(str[k]-'0'))
                {
                    count++;
                }
            }
            
            s[j]=count;
        }
    }
    
    for(int i=0;i<10;i++)
    {
        printf("%d\t",s[i]);
    }
    return 0;
}
