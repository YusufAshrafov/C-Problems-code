// //#algo0064. Sikl4
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  double s=0, x, n;
  cin >> n >> x;
  for (int i=1; i<=n; i++)
  s+=pow((-1),(i-1))/pow(x, 2*i);  
  cout << setprecision(3) << fixed << s;
  return 0;
}
