// Misol 334
#include"iomanip"
#include<cmath>
#include <iostream>   
using namespace std;
int main () {
    double s; int x,y,z;
    cin>>x>>y>>z;
  s=(x+y+z)/3.0;
    cout<<setprecision(2)<<fixed<<s;
  return 0;
}
