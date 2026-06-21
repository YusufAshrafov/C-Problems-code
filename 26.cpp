// //#algo0026. Chiziqli 11
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   int a;
   double x,y,z;
   cin>>a>>x>>y;
   z=sqrt(exp(x*y)-x*sin(a*x)-((x*x+2)/(fabs(x)+5)))+sqrt(log(x*x+2)+5);
   cout.precision(2);
   cout<<fixed<<z; return 0;
}
