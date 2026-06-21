// //#algo0039. Tarmoqlanuvchi 9
#include <bits/stdc++.h>
using namespace std;
double a, b;
int main()
{
cin >> a >> b;
if (a > b) printf ("%.1f %.1f", a * b * 4, (a + b) / 2);
else  printf ("%.1f %.1f", (a + b) / 2, 4 * a * b);
return 0;
}
