//program to print half pyramid.
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the no's of rows \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";

        }
        cout<<endl;
    }

return 0;

}