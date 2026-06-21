// //#algo0020. Chiziqli 5
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
  float x, y, z;
  cin >> x >> y;
  z = (x*x+1) / (x*x+(x*y+y*y) / (y*y+(y+x*y) / (fabs(x*y)+5))) + 1 / (1+cos(x)+1 / sin(fabs(x)));
  cout << setprecision(2) << fixed << z;
  return 0;
}
