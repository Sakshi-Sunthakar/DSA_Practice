//Program to find maximum subbaray on the array.
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int ans=2;
    int pd=a[0]-a[1];
    int curr=2;
    int j=2;

    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;
        }
        else
        {
            pd=a[j]-a[j-1];
            curr=2;
        }

        ans=max(ans,curr);
        j++;
    }

    cout<<"length of longest subarray = "<<ans;
    
    return 0;
}