// //#algo0063. Sikl3
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    float s=0, p;
    cin >> n;
    for (int i=1;  i<=n; i++)
    {
        p=1;
        for (int j=1; j<=2*i-1; j++)
        p*=j;
        s+= pow (-1, i-1)/p;
    }
    cout << setprecision(4) << fixed << s;
    return 0;
}
