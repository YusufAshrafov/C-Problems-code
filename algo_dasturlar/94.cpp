// //#algo0094. Sikl34
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x,y,c,d;double s=0, p = 1, P = 1, sp=0;
  cin >> x >> y >> c >> d; 
  for (int a= 1; a<= x; a++){
  s +=pow((2*a+cos(a)),2);}
  for (int n= 1; n <= y; n++){
  p *= (n+6.0)/(sqrt(n*n+2.0));}
  for (int k= 1; k<= c; k++)
  {
    for (int i= 1; i<= d; i++){
    P *= (k*k+i)/(sqrt(k*k+i*i));
   sp += P; P=1;}}
  printf ("%.2f %.2f %.2f", s, p, sp);
  return 0;
}
