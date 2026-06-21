// //#algo076. Sikl16
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main() {
double a,b,c,x,h=3,y=0;
cin>>a>>b>>c;
for (x=a;x<=c;x=x+h) {
y+=pow((a*x+b)*1./(b*b+pow(cos(x),2)),1./3)-sin(x*x)*1./(a*b);
}
printf("%.2f",y);
}
