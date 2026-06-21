// //#algo0046. Tarmoqlanuvchi16
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  float a, y;
  cin >> a;
  if (a<-1) y=1/(a*a);
  else if (a>=-1&&a<2) y=a*a;
  else y=4;
  cout << setprecision(2) << fixed << y;  
  return 0;
}
