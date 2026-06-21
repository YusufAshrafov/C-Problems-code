// //#algo0062. Sikl2
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
  s+=pow(-1, i-1) * sin(pow(i,i))/pow(2, i);
  cout << setprecision(2) << fixed << s;
  return 0;
}
