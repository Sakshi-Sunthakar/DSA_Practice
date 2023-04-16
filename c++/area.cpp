//programme to calculate area's circumfference of circle and perimetre of square rectangle and triangle.
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float r,arc,ars,arr,art,cf,pms,pmr,s,pmt,l,b,x,x1,x2,x3,pi=3.142;
    cout<<" Enter the value of radius of circle \n";
    cin>>r;
    arc=pi*r*r;
    cf=2*pi*r;
    cout<<" Area of circle = "<<arc<<endl<<"Circumfference of circle =\n"<<cf<<endl;
    cout<<" Enter the value of side square \n ";
    cin>>s;
    ars=s*s;
    pms=4*s;
    cout<<" Area of square = "<<ars<<endl<<"Perimetre is square = "<<pms<<endl;
    cout<<" Enter the value of lenght and breath \n";
    cin>>l>>b;
    arr=l*b;
    pmr=2*(1+b);
    cout<<" Area of rectangle ="<<arr<<endl<<" Perimetre of rectangle ="<<pmr<<endl;
    cout<<"Enter the value of sides of triangle of triangle "<<endl;
    cin>>x1>>x2>>x3;
    pmt=x1+x2+x3;
    x=0.5*(pmt);
    cout<<" perimetre of triangle = "<<pmt<<endl;
    return 0;    

}
