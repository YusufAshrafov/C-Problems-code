// mIsol 145
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
  int n ,m, max,min,y=0;
  cin>>n>>m;
  int a[n][m];
  for(int i=0; i <n; i++){
       for(int j=0; j <m; j++){
           cin>>a[i][j];}}
              for(int i=0; i <n; i++){
       for(int j=0; j <m; j++){cout<<a[i][j]<<" ";
           y+=a[i][j];}   cout<<y<<"\n";   y=0;}
       //    cout<<"\n"<<max<<" "<<min;
  return 0;
}
