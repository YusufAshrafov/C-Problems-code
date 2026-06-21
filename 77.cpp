// //#algo0077. Sikl17
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main(){
unsigned a,b,c,d,h;
cin>>a>>b>>c>>d;
h=2;
double x, y=0;
for(x=c;x<=d;x+=h)
{
y+= pow((sin(a*x)+pow((double)b,(double)2*c))/(b*b+cos(x)*cos(x)),(double)1/3)-(( sin(x*x))/((double) a*b));
}
printf("%.2f",y);
return 0;
}
