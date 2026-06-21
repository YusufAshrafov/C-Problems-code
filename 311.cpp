// Misol 311
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
   double a,x,y;
    cin>>x>>a;
        y=cbrt(pow(x,4))+x*sin(x)*a;
            cout<<setprecision(2)<<fixed<<y;
  return 0;
}
