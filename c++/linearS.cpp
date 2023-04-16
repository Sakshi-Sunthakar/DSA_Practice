//Progam to find key element in give array list.
#include<iostream>

using namespace std;

int linearsearch(int array[] ,int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(array[i]==key)
        {
            cout<<" Element is found at position ";
            return i;
        }


    }
    cout<<" Element is not present in list ";

    return -1;
}

int main()
{
    int n,array[10];

    cout<<" Enter the size of array \n";
    cin>>n;

    cout<<" Enter the array elements one by one \n";
    for( int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int key;

    cout<<" Enter the element to seached \n";
    cin>>key;

    cout<<linearsearch(array,n,key);
    return 0;
}