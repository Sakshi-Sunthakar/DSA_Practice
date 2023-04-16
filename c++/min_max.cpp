#include<iostream>

using namespace std;

int main()
{
    int n,sum=0;

    cin>>n;

    int max=0;
    int min=100000;

    for(int i=1;i<=n;i++)
    {
        sum=sum+i;

        if(min>i)
        {
            min=i;
        }

        if(max<i)
        {
            max=i;
        }
    }

    cout<<(sum-max)<<" "<<(sum-min);

}
