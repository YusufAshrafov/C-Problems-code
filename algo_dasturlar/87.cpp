// //#algo0087. Sikl27
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
  int a;
  float y=0;
  cin >> a;
  for (float i=-M_PI/2; i<=M_PI; i+=M_PI/10)
  y+=2*pow(a, sin(2*i)/3)+i*i*cos(a*i);
  cout << setprecision(2) << fixed << y;
  return 0;
}
