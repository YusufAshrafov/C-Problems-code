// //#algo0100. Sikl40
#include <bits/stdc++.h>
using namespace std;
double x, y, c, d, s, p = 1, sp = 1, P = 1;
int main()
{
  cin >> x >> y >> c >> d;
  for (int a = 1; a <= x; a++)
  s += (x * a + 4) / sqrt(a + log(6));
  for (int a = 1; a <= y; a++)
  p *= (a * x * x + 6) / sin(a * x);
  for (int i = 1; i <= c; i++)
  {
    for (int j = 1; j <= d; j++)
    P *= (j * i + x * y) / pow((j * x + y), i / 2.);
    sp *= P; P = 1;
  }
  printf ("%.2f %.2f %.2f", s, p, sp);
  return 0;
}
