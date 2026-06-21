// //#algo0025. Chiziqli 10
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double x;
    int a;
    cin>>a>>x;
    double b = sqrt(x-1) + sqrt(x+2) + log(sqrt((double)a*x*x)+2)/log(10);
    double s = sqrt(sqrt(x+2)+sqrt(x+24)+x*x*x*x*x);
    double TT = b/s;
    cout<<setprecision(2)<<fixed<<TT;
    return 0;
}
