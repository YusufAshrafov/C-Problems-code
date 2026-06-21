// Misol 313
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
   int a,s,b,n;
   cin>>a>>b>>s;
   if(a>0&&b>0&&s>0){  n=a+b+s;  cout<<n;}
else   {  n=a*b*s;  cout<<n;}
  return 0;
}
