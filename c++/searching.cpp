//Program to search a key element in the array elements.
#include<iostream>

using namespace std;

int linearsearch(int array[],int n,int key);

int main()
{
    int n,array[10];

    cout<<"Enter the size of array \n";
    cin>>n;

    cout<<"Enter the array elements one by one \n";
    for( int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int key;
    cout<<" Enter the element to be searched \n";
    cin>>key;

    cout<<linearsearch(array,n,key);

    return 0;

}

int  linearsearch(int array[],int n,int key)
{
    int c,i,pos;
    for( int i=0;i<n;i++)
    {
        if(array[i]==key)
        {
            c=1;
            pos=i;
            break;
        }

        
    }
    if(c==0)
    {
        cout<<" Elements not found or Element is not present in list \n";
    }
    else
    {
        cout<<" Element is found at the position ";
    }

  
   return pos;
}