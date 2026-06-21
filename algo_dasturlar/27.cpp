// //#algo0027. Chiziqli 12
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    double x, aa;
    cin>>x;
    aa = sqrt((2*tan(x+2)-cos(x+pow(2,x)))/(1+cos(x+2)*cos(x+2)))+sin(x*x)/(x*x+3);
    cout<<setprecision(2)<<fixed<<aa;
    return 0;
}
