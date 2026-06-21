// Misol 320
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
     int y,x; double s;
   cin>>x>>y;
       s=abs(x-y+sqrt(abs(y)+2.0)-(x-(x+y)/(exp(y+1.0)-5.0)))+(sin(x+y))/(pow(x+y,1/3.0));
     cout<<setprecision(2)<<fixed<<s;
  return 0;
}
