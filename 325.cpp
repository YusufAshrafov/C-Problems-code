// Misol 325
#include<iomanip>
#include<cmath>
#include <iostream>   
using namespace std;
int main () {
    int x,y,c,d; double s=0,p=1,sp=0,t=1;
    cin>>x>>y>>c>>d;
    for(int m=1; m<=x; m++){
        s+=(3.0*m*m*m)/(m*m*m+log(m+3.0)); }
          for(int k=1; k<=y; k++){
        p*=(3.0*k)/(k*k*k+7.0*k); }
          for(int i=1; i<=c; i++){
            for(int j=1; j<=d; j++){
                t*=(log(i)+pow(j,i))/(pow(j,i)+i*i);}
                sp+=t; t=1;}
                cout<<setprecision(2)<<fixed<<s<<" ";
                cout<<setprecision(2)<<fixed<<p<<" ";
                cout<<setprecision(2)<<fixed<<sp;
  return 0;
}
