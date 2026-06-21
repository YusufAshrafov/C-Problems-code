// //#algo0090. Sikl30
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
  int a,b,c;   double y=0,h=M_PI/10;
  cin>>a>>b>>c;
 for(double i=-M_PI;i<=M_PI;i+=h){
 y+=(log(pow(a,2*sin(i)))+exp(2*i))/(atan(i)+b)+c;}
  cout<<setprecision(2)<<fixed<<y;
  return 0;
}
