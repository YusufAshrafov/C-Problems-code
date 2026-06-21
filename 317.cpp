// Misol 317
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
    double s,x,y;
   cin>>x>>y;
     s=(x+2*y)/(y*y+abs((y*y+2)/(x+1)))+2*x-y;
     cout<<setprecision(2)<<fixed<<s;
  return 0;
}
