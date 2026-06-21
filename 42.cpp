// //#algo0042. Tarmoqlanuvchi12
#include <bits/stdc++.h>
using namespace std;
double a, b, c, d, n = 4, Max = -1111, Min = 1111;
int main()
{
  cin >> a >> b >> c >> d;
  Min = min(min(a, b), min(c, d));
  Max = max(max(a, b), max(c ,d));
  if (a <= b && b <= c && c <= d) {
    while (n--) cout << Max << " ";
  } else {
    while (n--) cout << Min << " ";
  }
  return 0;
}
