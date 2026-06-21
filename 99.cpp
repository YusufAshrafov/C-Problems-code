// //#algo0099. Sikl39
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    unsigned x,y,c,d;double S=0,P=1,SP=0,PP=1;
    cin>>x>>y>>c>>d;
    for(double k=1; k<=(double)x; k++){
        S+= k*k*k+exp(k);
        }
        for(double a=3; a<=(double)y; a++){
            P*=(a*(double)x)/sqrt(a*a+(double)x*(double)x);
            }
            for(double i=1; i<=(double)c; i++){
                  double PP = 1;
                for(double j = 1; j<=(double)d; j++){
                   double n= (i*(double)x+j*j)/(sqrt(i*i+j*(double)y));
                      PP*=n;
                    }
                     SP+=PP;
                }
    cout<<setprecision(2)<<fixed<<S<<" "<<P<<" "<<SP;
    return 0;
}
