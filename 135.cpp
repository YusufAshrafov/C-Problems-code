// mIsol 135
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
  int n ,m,x; double s=0;
  cin>>n>>m;
  int a[n][m];
  for(int i=0; i <n; i++){
  for(int j=0; j <m; j++){
        cin>>a[i][j];      cout<<" ";} cout<<"\n"; }  
        cin>>x;
  for(int i=0; i <n; i++){
  for(int j=0; j <m; j++){ 
   if(i!=x-1){ cout<<a[i][j]<<" "; }}cout<<"\n";}
  return 0;
}
