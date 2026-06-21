// //#algo0019. Ciziqli 4
#include <bits/stdc++.h>
using namespace std;
int main()
{
  double x,y,z;
  cin>>x>>y;
  z=log(fabs(((x+y)*(x+y))+sqrt(fabs(y)+2)-
  (x-(x*y)/(((x*x)/2)-5))))+
  ((cos(x+y))*(cos(x+y)))/pow((x+y),1/3.0);
  printf("%.2f",z);
  return 0;
}
