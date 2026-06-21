// //#algo075. Sikl15
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int n, k;
    float s=0, p;
    cin >> n >>k;
    for (int i=0; i<=n; i++)
    {
        p=1;
        for (int j=1; j<=i; j++)
        p*=j;
        s+=pow (-1, i)*pow(k, i)/ p;
    }
    cout << setprecision(3) << fixed << s;
    return 0; 
}
