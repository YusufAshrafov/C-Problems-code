// //#algo0080. Sikl20
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  int a;
  float y=0;
  cin >> a;
  for (float i=0; i<=10; i+=0.5)
  {
    y+=a*cos(i)-sin(i*i);
  }
  cout << setprecision(2) << fixed << y;
  return 0;
}
