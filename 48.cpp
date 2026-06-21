// //#algo0048. Tarmoqlanuvchi18
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  float a, y;
  cin >> a;
  if (a<0) y=-a;
  else y= - a*a;
  cout << setprecision(2) << fixed << y;  
  return 0;
}
