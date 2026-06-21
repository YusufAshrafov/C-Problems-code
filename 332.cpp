// Misol 332
#include"iomanip"
#include<cmath>
#include <iostream>   
using namespace std;
int main () {
    double s,x,y;
    cin>>x>>y;
  s=(x*x+1.00)/(x*x+(x+y*y)/(y*y+(y+x)/(x+7.00)))+(cos(x)+1.00/cos(abs(x)))/(1.00+sin(x)+1.00/sin(abs(x)));
    cout<<setprecision(2)<<fixed<<s;
  return 0;
}
