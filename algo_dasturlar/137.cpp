// mIsol 137
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
  int n ,m,x=0; double s=0;
  cin>>n;
  int a[n][n];
  for(int i=0; i <n; i++){
  for(int j=0; j <n; j++){
        cin>>a[i][j];      cout<<" ";} cout<<"\n"; }  
        cin>>m;
  for(int i=0; i <n; i++){
  for(int j=0; j <n; j++){ 
         if(a[i][j]%m==0){ s+=a[i][j];  x++; }}}
  s=s/x;    cout<<setprecision(2)<<fixed<<s; 
  return 0;
}
