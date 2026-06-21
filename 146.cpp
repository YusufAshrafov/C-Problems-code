// Misol 146
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main ()
{
  int n ,m,s=0,y=0;
  cin>>n>>m;
  int a[n][m];
  for(int i=0; i <n; i++){
       for(int j=0; j <m; j++){
           cin>>a[i][j];}    }   
            for(int i=0; i <n; i++){
       for(int j=0; j <m; j++){
           cout<<a[i][j]<<" ";}  cout<<"\n";  }   
                 for(int i=0;  i<m;  i++){
       for(int j=0;  j<n;  j++){ 
       s+=a[j][i];  }  cout<<s<<" ";  s=0;}
  return 0;
}
