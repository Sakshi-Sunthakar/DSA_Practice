#include <iostream>

using namespace std;


int findDuplicate(int arr[], int n){
	
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                if(arr[i]==arr[j])
                {
                    return arr[i];
                }
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<findDuplicate(arr,n);

    return 0;
}
