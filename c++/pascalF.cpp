//Pascal triangle using function.
#include<iostream>

using namespace std;

int pascal(int n)
{
    
    for( int i=0;i<n;i++)
    {
        int coef=1;

        for(int j=1;j<(n-i);j++)
        {
            cout<<"  ";
        }
        for( int j=0;j<=i;j++)
        { 
            cout<<"   "<<coef;
            coef=coef*(i-j)/(j+1);
        }
        cout<<endl;
        
    }
    return 0;
}
int main()
{
    int n;

    cin>>n;

    pascal(n);

    
    return 0;
}