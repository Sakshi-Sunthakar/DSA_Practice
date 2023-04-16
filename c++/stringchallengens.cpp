//string challenges
#include<iostream>

#include<string>

#include<algorithm>

using namespace std;

void strusingf(string str)
{
    
    transform(str.begin(),str.end(),str.begin(),::toupper);

    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::tolower);

    cout<<str;
}
void struplow(string str)
{
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a' || 'z'<=str[i])
        {
            str[i]-=32;
        }
    }
    cout<<str<<endl;
    
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' || 'Z'<=str[i])
        {
            str[i]+=32;
        }
    }
    cout<<str<<endl;
}


int main()
{
    string str="agadiframe";

    struplow(str);
    strusingf( str);

    return 0;

}