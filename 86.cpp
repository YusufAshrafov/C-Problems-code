// //#algo0086. Sikl26
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
  int a,b,c;   double y=0;
  cin>>a>>b>>c;
 for(double i=c;i<=b;i+=0.25){
 y+=a*a*cos(i)+sin(i)/2.0+b*i*i;}
  cout<<setprecision(2)<<fixed<<y;
  return 0;
}
