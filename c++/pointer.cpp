//initialization and printing value of pointer.
#include<iostream>

using namespace std;

int main()
{
    int a=10;
    int* aptr=&a;
    

    cout<<"a="<<a<<endl;
    cout<<"*aptr= "<<*aptr<<endl;
    cout<<"aptr="<<aptr;

    return 0;

}