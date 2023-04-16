//string append adding 
#include<iostream>
#include<string>

using namespace std;

void stringsubstract(string s1)
{
    cout<<s1.substr(1,2)<<endl;
}

void stringresize(string s1,string s2)
{
    s1.resize(3);
    s2.resize(3);
    cout<<s1<<endl<<s2<<endl;
}

void stringlength(string s1,string s2)
{
    cout<<s1.length()<<endl<<s2.size()<<endl;
}
void insertstring(string s1,string s2)
{
    s1.insert(3,"ji");
    s2.insert(3,"ji");
    cout<<s1<<endl;
    cout<<s2<<endl;
}

void findstring(string s2)
{
    cout<<s2.find("ll")<<endl;
}

void emptystring(string s1)
{  
    
    s1.clear();
    cout<<s1<<endl;;
}
void appendstring(string s1,string s2)
{  
    s1.append(s2);
    cout<<s1<<endl;
}
void atstring( string s1)
{
    cout<<s1.at(3-1)<<endl;

}
void comparestring(string s1,string s2)
{
    cout<<s1.compare(s2)<<endl;
   
}
int main()
{
    int n;
    string s1,s2;

    cin>>s1>>s2;
    
    do
    {
        cout<<"Enter ur choice \n";
        cout<<"1.atstring\n2.comparestring\n3.emptystring\n4.appendstring\n5.findstring\n6.insertstring\n7.stringlength\n8.stringsize\n9.stringsubstract\n10.return\n";
        cin>>n;
        switch(n)
        {
            case 1:atstring(s1);
                break;
            case 2:comparestring(s1,s2);;
                break;
            case 3:emptystring(s1);
                break;
            case 4:appendstring(s1,s2);
                break;
            case 5:findstring(s2);
                break;
            case 6:insertstring(s1,s2);
                break;
            case 7:stringlength(s1,s2);
                break;
            case 8:stringresize(s1,s2);
                break;
            case 9:stringsubstract(s1);
                break;
            case 10:return 0;
                break;   
            default:cout<<"Invalid opertion\n";
        }
           
    }while(n!=10);

  return 0; 

}

