// Misol 401
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{int x,a,b; double s;
cin>>x>>a>>b;
if(x>4){s=16*x+a; cout<<setprecision(2)<<fixed<<s;}
if(x<2){s=exp(a*x)+cos(b*x); cout<<setprecision(2)<<fixed<<s;}
if(x>=2&&x<=4){s=x*x*log2(a*x);
cout<<setprecision(2)<<fixed<<s;}
    return 0;}
