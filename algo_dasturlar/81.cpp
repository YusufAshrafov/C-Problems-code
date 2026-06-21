// //#algo0081. Sikl21
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  int a, b;
  float y=0;
  cin >> a >> b;
  for (float i=1; i<=12; i+=2)
  {
    y+=a*a+pow((b+sin(i))/(a*a*a+cos(i*i*i)*cos(i*i*i)),0.2);
  }
  cout << setprecision(2) << fixed << y;
  return 0;
}
