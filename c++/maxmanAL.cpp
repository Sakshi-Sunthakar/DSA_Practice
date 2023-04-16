//Program to find maximum and minimum of arrays elements.
#include<iostream>
#include<climits>

using namespace std;

int main()
{
    int n,array[10];

    cout<<" Enter the size of arrays elements \n ";
    cin>>n;

    cout<<" Enter the array elements one by one \n";
    for( int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    
    cout<<" Array elements are \n";
    for( int i=0;i<n;i++)
    {
        cout<<array[i]<<" "<<endl;
    }

    int maxno=INT_MIN;
    int minno=INT_MAX;

    for( int i=0;i<n;i++)
    {
        maxno=max(maxno,array[i]);
        minno=min(minno,array[i]);
    }
    cout<<" Maximum ="<<maxno<<endl;
    cout<<" Minimum ="<<minno<<endl;


    return 0;

}