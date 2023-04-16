#include<iostream>

using namespace std;

void plusminus(int n,int a[])
{
    int plus=0,minus=0,zero=0;
    float positive=0,negative=0,null=0;
   
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            plus++;
        }
        else if(a[i]<0)
        {
            minus++;   
        }
        else
        {
            zero++;
        }
    }
     positive=(float)plus/n;
     negative=(float)minus/n;
     null=(float)zero/n;
    cout<<positive<<endl;
    cout<<negative<<endl;;
    cout<<null<<endl;;
}
int main()
{
    int n;
    cin>>n;
    int a[10];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    plusminus(n,a);
}