// //#algo0018. Chiziqli 3
#include <bits/stdc++.h>
using namespace std;
int main()
{
  double f2,x,y;
  cin>>x>>y;
  f2=(1.0/(x+2.0/(x*x)+3.0/(x*x*x))+exp(x*x+3*x))
  /(atan(x+y)+(fabs(5+x)*fabs(5+x)))-
  (cos(y*y+(x*x)/2.0)*(cos(y*y+(x*x/2.0))));
  printf("%.2f",f2);
  return 0;
}
