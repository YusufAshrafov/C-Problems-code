// //#algo0024. Chiziqli 9
#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
double x, w1;
int a, b, c;
cin >> a >> b >> c >> x;
w1 = 0.75 + (8.2*x*x + sqrt(fabs(x*x*x + 3*x) + cos(x-2)))/((double) a/4 + (double) b/3 + (double) c/2 +1);
cout << setprecision(2) << fixed << w1;
return 0;
}
