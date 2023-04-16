//program to find value  maximum hour glass .
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int r=6,c=6,res;

    int arr[r][c];
    for( int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum=0;
    int max_hg=0;
    for( int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
             sum=(arr[i][j]+arr[i][j+1]+arr[i][j+2])+(arr[i+1][j+1])+
                    (arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);

                    if(sum>max_hg)
                    {
                        max_hg=sum;
                    }
        }
               
    }
   
    cout<<max_hg;

    return 0;
}

