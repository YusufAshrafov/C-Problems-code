// //#algo0049. Tarmoqlanuvchi19
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  float a, y;
  cin >> a;
  y=fabs(1-fabs(a));
  cout << setprecision(2) << fixed << y;  
  return 0;
}
