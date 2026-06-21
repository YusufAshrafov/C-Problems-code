// //#algo0093. Sikl33
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x,y,d,b;double s=0, p = 1, P = 1, sp=0;
  cin >> x >> y >> d >> b; 
  for (int k= 1; k<= x; k++){
  s += (k*k+sin(k)+5.0) / (pow((pow(k,7)+1.0),1/5.0));}
  for (int n= 1; n <= y; n++){
  p *= (n+sqrt(n)) / (n-pow(n+1.0,1/5.0));}
  for (int k= 1; k<= d; k++)
  {
    for (double i= 1; i<= b; i++){
    P *= (i*i+pow(k*k,1/i))/((sin(i)+cos(k))*pow(i,k));
   } sp += P; P=1;}
  printf ("%.2f %.2f %.2f", s, p, sp);
  return 0;
}
