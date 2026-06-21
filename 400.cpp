// Misol 400
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{int a,b,x; double s;
cin>>x>>a>>b;
if(x>7){s=x*x*(sqrt((x*x*x)+(a)));
    cout<<setprecision(2)<<fixed<<s;}
    if(x<1){s=6+x;
    cout<<setprecision(2)<<fixed<<s;}
    if(x>=1&&x<=7){s=exp(a*x)+cos(x*b);
    cout<<setprecision(2)<<fixed<<s;}
    return 0;
}
