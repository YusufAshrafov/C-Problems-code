// Misol 165
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f(double a,double b,double c)
{ 
    double j;
    j=(2.0*a-b-sin(c))/(5.0+abs(c));
    return j;
}    
int main(){
    double t,s,d;
 cin>>t>>s;
 d=f(t,-2*s,1.17)+f(2.2,t,s-t);
 cout<<setprecision(2)<<fixed<<d;
 return 0;
}
