// //#algo0043. Tarmoqlanuvchi13
#include <iostream>
using namespace std;
double x, y;
int main()
{
  cin >> x >> y;
  if (x < 0 && y < 0) cout << x * -1 << " " << y * -1;
  else if (x >= 0 && y >= 0) cout << x << " " << y;
  else cout << x + 0.5 << " " << y + 0.5;
  return 0;
}
