// //#algo0067. Sikl7
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  int x, n;
  double s=0;
  cin >> n >> x;
  for (int i=1; i<=n; i++)
  s+=pow(x, i)/sqrt(i);  
  cout << setprecision(3) << fixed << s;
  return 0;
}
