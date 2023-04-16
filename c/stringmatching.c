//string pattern matching program

#include<stdio.h>

void main()
{
    char str[100],pat[100],rep[100],ans[100];
    int i,j,c,m,k,flag=0;

    printf("Enter the main string \n");
    gets(str);

    printf("Enter the pattern string \n");
    gets(pat);

    printf("Enter the replaced string \n");
    gets(rep);

    i=m=c=j=0;

    while(str[c]!='\0')
    {
        if(str[m]==pat[i])
        {
            i++;
            m++;
            flag=1;
            if(pat[i]=='\0')
            {
                for(k=0;rep[k]!='\0';k++,j++)
                {
                    ans[j]=rep[k];
                    i=0;
                    c=m;
                   
                }
            }
        }
        else
        {
            ans[j]=str[c];
            j++;
            c++;
            m=c;
            i=0;
        }
    }
    if(flag==0)
    {
        printf("Pattern n't found !\n");
    }
    else
    {
        ans[j]='\0';
        printf(" The resuntant string :: %s\n",ans);
    }
}