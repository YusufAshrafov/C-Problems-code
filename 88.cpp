// //#algo0088. Sikl28
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
  int a,b,c,d;   double y=0,h=1.5;
  cin>>a>>b>>c>>d;
 for(double i=d;i<=c;i+=h){
 y+=pow(((a*i+b)/(b*b+(cos(i)*cos(i)))),1/5.0)-(sin(i*i))/(a*b);}
  cout<<setprecision(2)<<fixed<<y;
  return 0;
}
