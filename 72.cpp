// //#algo0072. Sikl12
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
  int x, n;
  float s=0;
  cin >> n >> x;
  for (int i=1; i<=n; i++)
  {
    float p=1;
    for (int j=1; j<=i*2-2; j++)
    p*=j;
    s+=pow(x, 2*i-2)/p;
  }
  cout << setprecision(3) << fixed << s;
  return 0;
}
