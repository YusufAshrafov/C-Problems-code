// //#algo0028. Chiziqli 13
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
int a;
double x, bb1;
cin >> a >> x;
bb1 = x*sin(x/2 + x/3 + x/4) + (log10(x*x-2) + pow(3,a))/(cos(x+3)*sin(x+3) + 8);
cout << setprecision(2) << fixed << bb1;
return 0;
}
