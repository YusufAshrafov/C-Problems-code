// //#algo0033. Tarmoqlanuvchi 3
#include <bits/stdc++.h>
using namespace std;
double x, y, z, Max = - 111, Min = 111, MIN = 111;
int main()
{
  cin >> x >> y >> z;
  Max = max(max(x + y + z, x), max(y, z));
  MIN = min(min(x + y / 2, x), min(y, z));
  Min = MIN * MIN;
  printf("%.2f %.2f", Max, Min);
  return 0;
}
