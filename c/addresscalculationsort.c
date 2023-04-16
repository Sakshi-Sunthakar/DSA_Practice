#include<stdio.h>
#include<stdlib.h>
struct node
{
       int info;
       struct node *link;
};
typedef struct node * NODE;
NODE start[10];
int n,i,a[20];

int hash_fn(int number,  int k)
{
        int digit, i;
        for(i = 1 ; i <=k ; i++)
        {
              digit = number % 10 ;
              number = number /10 ;
        }
        return digit;
}
int large_dig()
{
       int large = a[0],ndig = 0 ;
       for(i=0;i<n;i++)                  
        { 
              if(a[i] > large)
              {
                      large = a[i];
              }
        }
       printf("\nLargest Element is %d",large);

        while(large != 0)    
        {
               ndig++;
               large = large/10 ;
        }
      printf("\nNumber of digits in it are %d", ndig);
      return(ndig);
}
void insert(int num, int addr)
{
      NODE tmp1 ,tmp;
      tmp = (NODE)malloc(sizeof(struct node));
      tmp->info = num;

       if(start[addr] == NULL || num < start[addr]->info)
        { 
            tmp->link = start[addr];
            start[addr] = tmp;
            return;
        }
        else
        {
            tmp1= start[addr];
            while(tmp1->link != NULL && tmp1->link->info < num)
                {
                      tmp1= tmp1->link;
                }
            tmp->link = tmp1->link;
            tmp1->link = tmp;
        }
}
void addr_sort()
{
       int i, k, dig, addr;
       NODE p;
       for(i=0;i<=9;i++)
        {
               start[i]=NULL;
        }

       k = large_dig();

       for(i=0;i<n;i++)
        {
               addr = hash_fn(a[i], k);
               insert(a[i], addr);
        }
      for(i=0; i<=9 ; i++)
        {
              printf("\nstart(%d) -> ", i);
              p = start[i];
              while(p!=NULL)
                {
                    printf("%d ", p->info);
                    p = p->link;
                }
        }
        i = 0;
        for(k=0;k<=9;k++)
        { 
               p = start[k];
               while(p!=NULL)
                { 
                       a[i++] = p->info;
                       p = p->link;
                }
        }
}
void main()
{
      int i;
      printf("\nEnter the number of elements in the list : ");
      scanf("%d", &n);
      for(i=0;i<n;i++)
       {
             printf("\nEnter element %d : ",i+1);
             scanf("%d",&a[i]);
       }
      addr_sort();
      printf("\nSorted list is :\n");
      for(i=0;i<n;i++)
       {
              printf("%d ",a[i]);
       }
}
