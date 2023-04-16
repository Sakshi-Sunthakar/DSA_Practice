#include <iostream>
using namespace std;

int main() {
    
    int x=50,y=54,count=0;
    
    
    if(x<y)
    {
        while(x!=y)
        {
            x++;
            
            count++;
        }
    }
    else
    {
        while(x!=y)
        {
            x--;
            
            count++;
        }
    }
	
	cout<<count;
	
	return 0;
}
