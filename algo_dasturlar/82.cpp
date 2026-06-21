// //#algo0082. Sikl22
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  int a, b, c;
  float y=0;
  cin >> a >> b >> c;
  for (float i=1; i<=10; i+=3)
  {
    y+=a*i*i/b+i/c;
  }
  cout << setprecision(2) << fixed << y;
  return 0;
}
