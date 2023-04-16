//counting all bits
#include<iostream>

using namespace std;

int count_all_bits(int n)
{
    int count=0;

    while(n)
    {
        count++;
        n=(n>>1);
    }
    return count;
}
int main()
{
    int n;
    cout<<"n=";

    cin>>n;

    cout<<count_all_bits(n);
}