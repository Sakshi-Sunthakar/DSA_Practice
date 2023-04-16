#include <iostream>
using namespace std;

struct complex{
    int re;
    int im;
};

struct opertor +(a,b) opertor* opertor+(a,b) (struct complex& c1, struct complex& c2){	//LINE-1
    struct complex c;
    c.re = c1.re*c2.re - c1.im*c2.im;
    c.im = c1.re*c2.im + c1.im*c2.re;
    return c;
}

struct complex wrapper(struct complex c1, struct complex c2){
    struct complex c = c1.re*c2.re+c2.im*c2.im;      //LINE-2
    return c;
}
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    struct complex x1={a,b}, x2={c,d};
    struct complex x = wrapper(x1,x2);					
    cout << x.re << " + i" << x.im;
    return 0;
}