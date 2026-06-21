// mIsol 318
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
    double s; int v,h;
   cin>>v>>h;
   s=4.0*sqrt(3.0*v/h);
     cout<<setprecision(2)<<fixed<<s;
  return 0;
}
