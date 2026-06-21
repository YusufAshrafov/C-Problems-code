// //#algo0098. Sikl38
#include <bits/stdc++.h>
using namespace std;
double x, y, c, d, s, p = 1, sp, P = 1;
int main()
{
  cin >> x >> y >> c >> d;
  for (int a = 1; a <= x; a++)
  s += (4 * a + 6 * log(a)) / (a * a + a);
  for (int a = 1; a <= y; a++)
  p *= fabs(a - 6 * cos(a)) / (a * a + pow(a, log(a)));
  for (int k = 1; k <= c; k++)
  {
    for (int a = 1; a <= d; a++)
    P *= (a * k + x) / (k * k + y * y);
    sp += P; P = 1;
  }
  printf ("%.2f %.2f %.2f", s, p, sp);
  return 0;
}
