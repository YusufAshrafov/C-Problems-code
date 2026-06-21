// //#algo0041.  Tarmoqlanuvchi11
#include <bits/stdc++.h>
using namespace std;
int k;
double a[4], Min = 2, s;
bool t = true;
int main()
{
  for (int i = 0; i < 3; i++)
  {
    cin >> a[i];
    if (Min > a[i]) {
      k = i;
      Min = a[i];
    }
    if (a[i] >= 1 || a[i] == a[i - 1] || a[i] == a[i - 2]) t = false;
  }
  if (t) {
    for (int i = 0; i < 3; i++) {
      if (k != i) s += a[i];
    }
    a[k] = s / 2;
  }
  for (int i = 0; i < 3; i++)
  cout << a[i] << " ";
  return 0;
}
