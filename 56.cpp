// //#algo0056. Tarmoqlanuvchi26
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x, y;
    cin >> x >> y;
    if (sqrt(x*x+y*y)<=1&&sqrt(x*x+y*y)>=0.5)
    cout << "yes";
    else cout << "no";
    return 0;
}
