//Programe to use sqrt function.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,s,ar;
    cout<<" Enter the value of sides \n";
    cin>>a>>b>>c;
    s=0.5*(a+b+c);
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<ar;
    return 0;

}