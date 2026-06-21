// //#algo0096. Sikl36
#include <bits/stdc++.h>
using namespace std;
double x, y, c, d, s, p = 1, S, sp = 1;
int main()
{
  cin >> x >> y >> c >> d;
  for (int k = 1; k <= x; k++)
  s += pow(-1, k) * (k + 1) / (k * k * k + k * k + 1);
  for (int i = 1; i <= y; i++)
  p *= (i * i * i + abs(i - 9)) / (log(i) + 7 * i);
  for (int n = 1; n <= c; n++)
  {
    for (int m = 1; m <= d; m++)
    {
      S += pow(-1, m) * log(m + 5) / (pow(m, n + 3) + n * m);
    }
    sp *= S; S = 0;
  }
  printf ("%.2f %.2f %.2f", s, p, sp);
  return 0;
}
