//string append adding 
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1,s2;

    cin>>s1>>s2;   

    s1.append(s2); //cout<<s1+s2;or//s1=s1+s2;

    cout<<s1;
    return 0;
}

