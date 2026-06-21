// //#algo0023. Chiziqli 8
#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
double x, y2;
int a, b, c, d;
cin >> a >> b >> c >> d >> x;
y2 = (double)(a*x*x + b*x + c) / (double) (x*a*a*a + a*a + pow(a,b-c)) + cos(fabs((double) (a*x + b)/ (double) (c*x + d + pow(2,c))));
cout << setprecision(2) << fixed << y2;
return 0;
}
