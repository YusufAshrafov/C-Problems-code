// //#algo0047. Tarmoqlanuvchi17
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  float a, y;
  cin >> a;
  if (a<0) y=-a;
  else if (a>0&&a<1) y=a;
  else if (a>=1&&a<2) y=1;
  else if (a>=2)y=5-2*a;
  cout << setprecision(2) << fixed << y;  
  return 0;
}
