// mIsol 338
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int n,a,b;   double s=0,m=1;
    cin>>a>>b>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
                 m*=(a*i+b*j)/(1.0*(i*i+j*j)); }
                 s+=m;   m=1;}
        cout<<setprecision(2)<<fixed<<s;
  return 0;
}
