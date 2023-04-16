//bitvise opertion 
#include<iostream>
using namespace std;
int n,pos,value;
void Get_Bit(int n,int pos);
void  Set_Bit(int n,int pos);
void Clear_Bit(int n,int pos);
void  Update_Bit(int n,int pos,int value);
int main()
{
    int ch;
    do
    {
       cout<<"\n__Basic Bitvise Opertions__"<<endl;
       cout<<"Get_Bit"<<endl<<"Set_Bit"<<endl<<"Clear_bit"<<endl<<"Update_bit"<<endl;
       cout<<"__Enter your choice__\n";
       cin>>ch;
       switch(ch)
       {
            case 1:cout<<"Number\n";
                    cin>>n;
                    cout<<"Positon\n";
                    cin>>pos;
                    Get_Bit(n,pos);
                    break;
            case 2:cout<<"Number\n";
                    cin>>n;
                    cout<<"Positon\n";
                    cin>>pos;
                    Set_Bit(n,pos);
                    break;
            case 3:cout<<"Number\n";
                    cin>>n;
                    cout<<"Positon\n";
                    cin>>pos;
                    Clear_Bit(n,pos);
                    break;
            case 4:cout<<"Number\n";
                    cin>>n;
                    cout<<"Positon\n";
                    cin>>pos;
                    cout<<"value\n";
                    cin>>value;
                    Update_Bit(n,pos,value);
                    break;
       }
    }while(ch!=4);
    return 0;

    
    
}
void  Get_Bit(int n,int pos)
{
    cout<<(1&(n>>pos))<<endl;
   
}
void Set_Bit(int n,int pos)
{
    cout<< (n|(1<<pos))<<endl;

}
void Clear_Bit(int n,int pos)
{
    int mask;
    mask=~(1<<pos);
    
    return (n & mask);
    
}
void Update_Bit(int n,int pos,int value)
{
    int mask;
    mask=~(1<<pos);
    n=n&mask;
    cout<< (n|(value<<pos))<<endl;
   
}
