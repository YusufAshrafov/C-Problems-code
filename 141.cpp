// mIsol 141
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
  int n ,max,m,x=0,min; double s=0;
  cin>>n>>m;
  int a[n][m];
  for(int i=0; i <n; i++){
       for(int j=0; j <m; j++){
           cin>>a[i][j];cout<<" ";}cout<<"\n"; } cin>>min>>max;
       /*     for(int i=0; i <n; i++){
       for(int j=0; j <n; j++){
           cout<<a[i][j]<<" ";}  cout<<"\n";  }   */
                    for(int i=0;  i<n;  i++){
       for(int j=0;  j<m;  j++){
           if(min<=a[i][j]&&a[i][j]<=max){
               s+=a[i][j];  x++; }}}    s=s/x;
   cout<<"\n"<<setprecision(2)<<fixed<<s;
  return 0;
}
