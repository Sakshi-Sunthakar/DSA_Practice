#include<iostream>

using namespace std;

int main()
{
    int n;
    
    cin>>n;
    
    int candles[n];
    for(int i=0;i<n;i++)
    {
        cin>>candles[i];
    }
    
    int max=0;
    int k,count=0;
    for(int i=0;i<n;i++)
    {
        if(max<candles[i])
        {
            max=candles[i];
            
            k=i;
        }
    }

    count++;
    
    for(int j=0;j<n;j++)
    {
        if(max==candles[j]&& k!=j)
        {
            count++;
        }
    }
    
    cout<<count;
}
