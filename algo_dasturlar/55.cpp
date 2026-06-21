// //#algo0055. Tarmoqlanuvchi25
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x, y;
    cin >> x >> y;
    if (sqrt(x*x+y*y)<=1) 
    cout << "yes";
    else cout << "no";
    return 0;
}
