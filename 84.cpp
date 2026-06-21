// //#algo0084. Sikl24
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  int a, b, c;
  double y=0;
  cin >> a >> b >> c;
  for (float i=5; i<=10; i+=0.5)
  {
    y+=(a*a+b*i+pow(i, c))/(a*a+b*b+i*i);
  }
  cout << setprecision(2) << fixed << y;
  return 0;
}
