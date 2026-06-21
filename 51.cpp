// //#algo0051. Tarmoqlanuvchi21
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    double x, y;
    cin>>x>>y;
    if((x>=-1 && x<=1 && y<=0 && y>=-2)||(x>=-1 && x<=1 && fabs(x)>=y)){
        cout<<"yes";
     }
     else cout <<"no";
}
