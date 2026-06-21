// //#algo0022. Chiziqli 7
#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main (){
  float x1,x2,F;
  int c,d;
  cin>>x1>>x2>>c>>d;
  F=fabs(pow(sin((fabs(pow(x2,3)*c+d*pow(x1,3)-(c*d)))),2)*1.0/(pow(((c*pow(x1,2)+d*pow(x2,2)+5)+2),1./2)))+tan(x1*pow(x2,2)+pow(d,3));
  printf("%.2f",F);
}
