// mIsol 336
#include<iomanip>
#include<cmath>
#include <iostream>   
using namespace std;
int main () {
    double s; int n,a;
    cin>>n;
    for(int i=1; i<=n; i++){
    s+=pow(i,n-i+1);}
    cout<<setprecision(2)<<fixed<<s;
  return 0;
}
