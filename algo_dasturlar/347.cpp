// MIsol 347
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int n,m;   double s=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){  cin>>a[i][j]; 
                 s+=a[i][j]; } }
        s/=n*m;    cout<<setprecision(2)<<fixed<<s;
  return 0;
}
