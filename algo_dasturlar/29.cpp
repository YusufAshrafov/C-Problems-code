// //#algo0029. Chiziqli 14
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
int a;
double x, y, tt;
cin >> a >> x >>y;
tt = sqrt(y*y + exp(x) + sqrt(exp(x) + (double) a/(x*x + 2)) + cos(x)*cos(x)/sin(x*x)) + cos(x)*cos(x)*cos(x);
cout << setprecision(2) << fixed << tt;
return 0;
}
