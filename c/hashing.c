#include<stdio.h>
#include<stdlib.h>

int key[20],n,m,*ht,hashindex,count=0,i;
void create_hash_table();
void insert_into_hash_table();
void display_hash_table();

void main()
{
    printf("Enter the number of employee\n");
    scanf("%d",&n);
    printf("Enter the three digit key value of N employee\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&key[i]);
    }
    printf("Enter the 2 digit memory alloaction for hash table\n");
    scanf("%d",&m);
    create_hash_table();
    printf("insert key values into hash table \n");
    for(i=0;i<n;i++)
    {
        if(m==count)
        {
            printf("hash table is full.cannot insert the %d record key value ",i+1);
            break;
        }
        insert_into_hash_table(key[i]);
    }

    display_hash_table();

}
void create_hash_table()
{
    int i;
    ht=(int*)malloc(m*sizeof(int));
    if(ht==NULL)
    {
        printf("\n Unable to create hash table \n");
    }
    else
    {
        for(i=0;i<m;i++)
        {
            ht[i]=-1;
        }
    }
}
void insert_into_hash_table(int key)
{
    hashindex=key%m;
    while(ht[hashindex]!=-1)
    {
        hashindex=(hashindex+1)%m;
    }
    ht[hashindex]=key;
    count++;
}
void display_hash_table()
{
    int i;
    if(count==0)
    {
        printf("\n Hash Table is empty\n");
    }
    printf("Hash table contents are:\n");
    
    for(i=0;i<m;i++)
    {
        printf("\nT[%d]-->%d",i,ht[i]);
    }
}
