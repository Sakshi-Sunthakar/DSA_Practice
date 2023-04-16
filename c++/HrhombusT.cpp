//Program to print hollow rhombus in rectriangle.
//*******
//*** ***
//**   **
//*     *
//**   **
//*** ***
//*******

#include<iostream>

using namespace std;

int main()
{

    int n,j,i,space;
    cout<<" Rows=";
    cin>>n;
    space=(2*n-1)/2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=space;j++)
        {
            cout<<"*";
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1||j==2*i-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            for(j=2*i-n;j<=2*i-3;j++)
            {
                cout<<"*";
            }
        }
        space--;
        cout<<endl;
    }
    space=0;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=space;j++)
        {
            cout<<"*";
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1||j==2*i-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            for(j=2*i-n;j<=2*i-3;j++)
            {
                cout<<"*";
            }
        }
        space++;
        cout<<endl;
    }
    return 0;


}