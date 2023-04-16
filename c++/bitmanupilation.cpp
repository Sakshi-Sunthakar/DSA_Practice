//counting number of set bits
#include<iostream>

using namespace std;
int count_bit(int n);
int main()
{
    int n;

    cout<<"n=";

    cin>>n;

    cout<<count_bit(n);

    return 0;

}
int count_bit(int n)
{
    int count =0;

    while(n)
    {
        n=n&(n-1);
        count++;
    }

    return count;
}