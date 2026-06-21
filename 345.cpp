// Misol 345
#include <iostream>
#include<cmath>
using namespace std;
int main ()
{
 int n,m,max,min,s=0;
  cin>>n>>m;   int a[n][m];
  for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
           cin>>a[i][j]; 
       if(i==0){ max=a[i][j]; min=a[i][j]; }
       if(a[i][j]>max){ max=a[i][j]; }
        if(a[i][j]<min){ min=a[i][j]; } } }
   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
           if(max==a[i][j] || min==a[i][j]){ s+=a[i][j]; }
       }}
       cout<<s;
  return 0;
}
