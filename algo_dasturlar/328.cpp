// Misol 328
#include"iomanip"
#include<cmath>
#include <iostream>   
using namespace std;
int main () {
    int a,b,x; double s;
    cin>>a>>b>>x;
    s=cbrt(a+1.00)+sqrt((a*x*x+2.00*b)/(2.00*b+a*b))*(a+x*x+2.00*b*b);
    cout<<setprecision(2)<<fixed<<s;
  return 0;
}
