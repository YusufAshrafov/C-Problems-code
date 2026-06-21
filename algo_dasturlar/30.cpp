// //#algo0030. Chiziqli 15
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{ int x;
    float z,y,AF;
        cin>>x>>y>>z;
        AF=pow(2.0,-x)*sqrt(x+pow((fabs(y)+2),1./4))*pow((exp(x-1)/sin(z+2)+2),1./3);
    printf("%.2f",AF);
    return 0;
}
