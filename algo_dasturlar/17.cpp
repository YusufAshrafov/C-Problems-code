// //#algo0017. Chiziqli 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
  double f1,x,y;
  cin>>x>>y;
  f1=(2*tan(x+M_PI/6.0))/(1/3.0+cos(y+x*x)*cos(y+x*x))+(log(x*x+2)/log(2));
  printf("%.2f",f1);
  return 0;
}
