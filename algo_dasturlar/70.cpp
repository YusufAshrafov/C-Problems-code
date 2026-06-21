// //#algo0070. Sikl10
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
    for (int j=1; j<=i*2-1; j++)
    p*=j;
    s+=pow(-1, i-1)*pow(x, 2*i-1)/p;
  }
  cout << setprecision(3) << fixed << s;
  return 0;
}
