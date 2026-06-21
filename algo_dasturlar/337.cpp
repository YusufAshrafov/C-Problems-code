// mIsol 337
#include<iomanip>
#include<cmath>
#include <iostream>   
using namespace std;
int main () {
    double s; int n,a;
    cin>>n;
    for(int i=1; i<=n; i++){
    s+=(3.0*i*i*i+4.0*i*i+5.0*i)/(i*i*i+i*i+i);}
    cout<<setprecision(2)<<fixed<<s;
  return 0;
}
