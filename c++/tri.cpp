// program to check triangle is scalene isoseles or equilateral 
#include<iostream>

using namespace std;

int main()
{
    int sidea,sideb,sidec;
    cout<<" Enter the value of sides \n ";
    cin>>sidea>>sideb>>sidec;
    if(sidea==sideb && sideb==sidec)
    {

        cout<<" Tringle is equilateral ";

    }
    else if(sidea==sideb || sideb==sidec|| sidec==sidea)
    {

        cout<<" Triangle is an isoseles ";

    }
    else
    {

        cout<<" Triangle is an scalene ";

    }

        return 0;
}