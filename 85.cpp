// //#algo0085. Sikl25
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
  int a, b, c;
  float y=0;
  cin >> a >> b >> c;
  for (float i=1; i<=20; i+=5)
  y+=(a*i*i+b*i+c)/(a*a+b*b+i*i);
  cout << setprecision(2) << fixed << y;
  return 0;
}
