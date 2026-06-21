// //#algo0050. Tarmoqlanuvchi20
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x, y;
    cin >> x >> y;
    if ( fabs(x)<=1&&y<=(3-3*fabs(x))-1&&y>=-2)
    cout << "yes";
    else cout <<"no";
    return 0;
}
