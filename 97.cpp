// //#algo0097. Sikl37
#include <bits/stdc++.h>
using namespace std;
double x, y, c, d, s, sp, P = 1, p = 1;
int main()
{
  cin >> x >> y >> c >> d;
  for (int n = 1; n <= x; n++)
  s += 1. / (5 - 17 * n + n * n * n);
  for (int m = 1; m <= y; m++)
  p *= sqrt(abs(m - 5) + 1) / (m * m + 4 * m - 1);
  for (int i = 1; i <= c; i++)
  {
    for (int k = 1; k <= d; k++)
      P *= pow(-1, i) * pow(fabs(sin(k) + exp(k)), 1. / 7.) / (2 * abs(4 * i * i * i - k * k * k * k));
    sp += P; P = 1;
  }
  printf ("%.2f %.2f %.2f", s, p, sp);
  return 0;
}
