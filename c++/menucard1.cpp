//Program to design a menu card of crete,delete,insert and display.
#include<iostream>
using namespace std;

int a[10],n;

//1.reading arrays.
void read()
{
    
    cout<<"n=";
    cin>>n;
    
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

//2.printing arrays.
void print()
{
  
    cout<<"array elements are \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

//3.inserting an array element.
void insert()
{
    int pos;
    cout<<"pos=";
    cin>>pos;

    int ele;
    cout<<"ele=";
    cin>>ele;

    if(pos>=n+1||pos<=0)
    {
        cout<<"Invalid position\n";
    }
    else
    {
        for(int i=n-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=ele;
        n=n+1;
    }
}

//4.deleting an element.
void delet()
{
     int pos;
    cout<<"pos=";
    cin>>pos;

   

    if(pos>=n+1||pos<=0)
    {
        cout<<"Invalid position\n";
    }
    else
    {
        for( int i=pos-1;i<=n-1;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
    }
}
int main()
{
    int ch;
    while(1)
    {
        cout<<"\nMenu card\n";
        cout<<"1.read\n2.print\n3.insert\n4.delet\n5.exit\n";
        cout<<"Enter your choice\n";
        switch (ch)
        {
            case 1:read();
                    break;
            case 2:print();
                    break;
            case 3:insert();
                    break;
            case 4:delet();
                    break;
            case 5:return 0;
                    break;
            default:cout<<"invalid choice\n";
                    
        }
    }
   
}