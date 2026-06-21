// Misol 307
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
   double s,a,p,b,h,c;
    cin>>c; a=c/2.00; b=sqrt((c*c)-(a*a));
    s=(a*b)/2;
    h=(2*s)/c;
    p=a+b+c;
    cout<<setprecision(2)<<fixed<<p;
    cout<<" "<<setprecision(2)<<fixed<<h;
  return 0;
}
