// Misol 166
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double g(double a,double b)
{ 
    double j;
    j=(a*a+b*b)/(a*a+2.0*a*b+3.0*b*b+4.0);
    return j;
}    
int main(){
    double t,s,d;
 cin>>t>>s;
 d=g(1.2,s)+g(t,s)+g(2.0*s-1.0,s*t);
 cout<<setprecision(2)<<fixed<<d;
 return 0;
}
