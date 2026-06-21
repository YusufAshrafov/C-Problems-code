// Misol 315
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
   int a,b; double s;
   cin>>a>>b;
   if(a>0&&b>0){   s=a*b;   cout<<setprecision(1)<<fixed<<s;}
   else if(a<0&&b<0){  s=(a+b)/2.0;   cout<<setprecision(1)<<fixed<<s;}
   else   {  a=abs(a); b=abs(b); s=a+b;  cout<<setprecision(1)<<fixed<<s;}
  return 0;
}
