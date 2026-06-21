// //#algo0079. Sikl19
#include <bits/stdc++.h>
using namespace std;
int main()
{
  double y = 0, a;
  cin >> a;
  for (double x = -M_PI/2; x < M_PI; x += M_PI/19)
  y += pow(a, a/3) + x * x * cos(a*x);
  cout << setprecision(2) << fixed << y;
  return 0;
}
