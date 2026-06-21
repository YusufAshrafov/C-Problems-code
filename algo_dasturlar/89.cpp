// //#algo0089. Sikl29
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
  int a,b,c;   double y=0;
  cin>>a>>b>>c;
 for(double i=0;i<=1;i+=0.25){
 y+=pow(((sin(a*i)+pow(b,c))/(b*b+(cos(i)*cos(i)))),1/2.0)-(sin(i*i))/(a*b);}
  cout<<setprecision(2)<<fixed<<y;
  return 0;
}
