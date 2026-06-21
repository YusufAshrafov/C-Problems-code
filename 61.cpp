// //#algo0061. Sikl1
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  int n;
  float s=0;
  cin >> n;
  for (int i=1; i<=n; i++)
  s+= sin(i)/pow(2, i);
  cout << setprecision(2) << fixed << s;
  return 0;
}
